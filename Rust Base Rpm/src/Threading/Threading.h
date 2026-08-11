#pragma once
#include <atomic>
#include <chrono>
#include <functional>
#include <thread>

class PollingThread {
public:
  PollingThread() : m_running(false) {}
  ~PollingThread() { Stop(); }

  PollingThread(const PollingThread &) = delete;
  PollingThread &operator=(const PollingThread &) = delete;

  void Start(std::function<void()> task, std::chrono::milliseconds interval) {
    if (m_running.exchange(true))
      return;
    m_thread = std::thread([this, task = std::move(task), interval]() {
      while (m_running.load(std::memory_order_acquire)) {
        task();
        std::this_thread::sleep_for(interval);
      }
    });
  }

  void Stop() {
    if (!m_running.exchange(false))
      return;
    if (m_thread.joinable())
      m_thread.join();
  }

private:
  std::atomic<bool> m_running;
  std::thread m_thread;
};
