#pragma once
#include <atomic>
#include <chrono>
#include <functional>
#include <thread>

class PollingThread {
 public:
  PollingThread()
      : m_running(false), m_interval(std::chrono::milliseconds(0)) {}
  ~PollingThread() { Stop(); }

  PollingThread(const PollingThread&) = delete;
  PollingThread& operator=(const PollingThread&) = delete;

  void Start(std::function<void()> task, std::chrono::milliseconds interval) {
    if (m_running.exchange(true)) return;

    m_interval.store(interval, std::memory_order_release);  // Store as member

    m_thread = std::thread([this, task = std::move(task)]() {
      while (m_running.load(std::memory_order_acquire)) {
        task();
        auto current_interval = m_interval.load(std::memory_order_acquire);
        std::this_thread::sleep_for(current_interval);
      }
    });
  }

 
  void SetInterval(std::chrono::milliseconds new_interval) {
    m_interval.store(new_interval, std::memory_order_release);
  }

  void Stop() {
    if (!m_running.exchange(false)) return;
    if (m_thread.joinable()) m_thread.join();
  }

 private:
  std::atomic<bool> m_running;
  std::atomic<std::chrono::milliseconds>
      m_interval;  // <-- Interval stored here
  std::thread m_thread;
};