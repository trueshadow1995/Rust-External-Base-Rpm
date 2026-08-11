#include "Prefabs.h"

namespace Prefabs {

std::string GetPrettyName(uint32_t id) {
  switch (id) {
    // Players
    case BASE_PLAYER: return "Player";

    // Sulfur nodes
    case SULFUR_ORE:
    case SULFUR_ORE2:
    case SULFUR_ORE3:
    case SULFUR_ORE4:
    case MINI_SULFUR_ORE: return "Sulfur Node";

    // Metal nodes
    case METAL_ORE:
    case METAL_ORE2:
    case METAL_ORE3:
    case METAL_ORE4:
    case MINI_METAL_ORE: return "Metal Node";

    // Stone nodes
    case STONE_ORE:
    case STONE_ORE2:
    case STONE_ORE3:
    case STONE_ORE4:
    case MINI_STONE_ORE: return "Stone Node";

    // Wood
    case WoodPiles: return "Wood Pile";

    // Plants
    case HEMP:
    case HEMP2: return "Hemp";
    case CORN:
    case CORN2: return "Corn";
    case POTATO:
    case POTATO2: return "Potato";
    case PUMPKIN:
    case PUMPKIN2: return "Pumpkin";
    case MUSHROOM:
    case MUSHROOM2: return "Mushroom";

    // Berries
    case YELLOW_BERRY: return "Yellow Berry";
    case BLUE_BERRY: return "Blue Berry";
    case RED_BERRY: return "Red Berry";
    case GREEN_BERRY: return "Green Berry";
    case BLACK_BERRY: return "Black Berry";
    case WHITE_BERRY: return "White Berry";

    // Vehicles
    case MINI_COPTER: return "Minicopter";
    case SCRAP_TRANSPORT_HELI: return "Scrap Heli";
    case ROWBOAT: return "Rowboat";
    case RHIB: return "RHIB";
    case TUGBOAT: return "Tugboat";
    case SUBMARINE_SOLO: return "Solo Sub";
    case SUBMARINE_DUO: return "Duo Sub";
    case HOT_AIR_BALLOON: return "HAB";
    case DPV: return "DPV";

    // Air / Bradley
    case PATROL_HELI_COPTER: return "Patrol Heli";
    case ATTACK_HELI: return "Attack Heli";
    case BRADLEY: return "Bradley APC";

    // Animals
    case WOLF: return "Wolf";
    case BOAR: return "Boar";
    case BEAR: return "Bear";
    case POLAR_BEAR: return "Polar Bear";
    case HORSE:
    case HORSE2:
    case HORSE3: return "Horse";
    case CHICKEN: return "Chicken";
    case STAG: return "Stag";
    case SHARK: return "Shark";
    case SNAKE: return "Snake";
    case BEE_SWARM:
    case BEE_SWARM2: return "Bee Swarm";
    case TIGER: return "Tiger";
    case PANTHER: return "Panther";

    // Traps
    case FLAME_TURRET: return "Flame Turret";
    case LAND_MINE: return "Land Mine";
    case SAM_SITE: return "SAM Site";
    case GUN_TRAP: return "Shotgun Trap";
    case BEAR_TRAP: return "Bear Trap";
    case TURRETS: return "Auto Turret";

    // Crates
    case ELITE_CRATE:
    case ELITE_CRATE2: return "Elite Crate";
    case BASIC_CRATE: return "Wooden Crate";
    case MILITARY_CRATE: return "Military Crate";
    case NORMAL_CRATE2:
    case NORMAL_CRATE3:
    case UW_CRATE_NORM: return "Normal Crate";
    case TOOL_CRATE:
    case TOOL_CRATE2: return "Tool Crate";
    case HACKABLE_CRATE:
    case HACKABLE_CRATE2:
    case HACKABLE_CRATE3: return "Hackable Crate";
    case AMMO_CRATE: return "Ammo Crate";
    case FOOD_CRATE:
    case FOOD_CRATE2:
    case FOOD_CRATE3:
    case FOOD_CRATE4:
    case FOOD_BOX: return "Food Crate";
    case FUEL_CRATE: return "Fuel Crate";
    case TECH_PARTS:
    case TECH_PARTS2: return "Tech Parts";
    case VEHICLE_PARTS:
    case VEHICLE_PARTS2: return "Vehicle Parts";
    case UW_CRATE_BASIC:
    case UW_CRATE_ADV: return "UW Crate";
    case MEDICAL_CRATE:
    case MEDICAL_CRATE2: return "Medical Crate";
    case MINECART: return "Minecart";
    case MINE_CRATE: return "Mine Crate";
    case BRADLEY_CRATE: return "Bradley Crate";
    case HELI_CRATE: return "Heli Crate";
    case STASH: return "Stash";

    // Barrels
    case RED_BARREL:
    case RED_BARREL2:
    case BLUE_BARREL:
    case BLUE_BARREL2: return "Barrel";
    case OIL_BARREL: return "Oil Barrel";
    case DIESEL: return "Diesel Barrel";

    // Supply drops
    case SUPPLY_DROP:
    case XMAS_PRESENT: return "Supply Drop";

    // Corpses
    case CORPSE:
    case CORPSE2:
    case CORPSE3:
    case CORPSE4:
    case CORPSE5: return "Corpse";

    // Dropped items / backpack
    case BACKPACK: return "Backpack";
    case DROPPED_ITEMS: return "Dropped Item";

    // Deployables
    case TOOL_CUPBOARD:
    case TOOL_CUPBOARD_RETRO:
    case TOOL_CUPBOARD_SHOCK: return "Tool Cupboard";
    case WORKBENCH1:
    case WORKBENCH1_2: return "Workbench T1";
    case WORKBENCH2:
    case WORKBENCH2_2: return "Workbench T2";
    case WORKBENCH3: return "Workbench T3";
    case VENDING_MACHINE: return "Vending Machine";
    case BED: return "Bed";
    case SLEEPING_BAG:
    case BEACH_TOWEL: return "Sleeping Bag";
    case FURNACE:
    case FURNACE2: return "Furnace";
    case FURNACE_LARGE: return "Large Furnace";
    case CAMPFIRE:
    case CAMPFIRE2: return "Campfire";
    case RESEARCH_TABLE:
    case RESEARCH_TABLE2: return "Research Table";
    case LARGE_WOODBOX: return "Large Box";

    // Doors
    case A_single_Door_deployed: return "Door";
    case A_double_Door_deployed: return "Double Door";

    // Batteries
    case BATTERY_SMALL: return "Small Battery";
    case BATTERY_MEDIUM: return "Medium Battery";
    case BATTERY_LARGE: return "Large Battery";

    default: return {};
  }
}

bool IsPlayer(uint32_t id) { return id == BASE_PLAYER; }

bool IsResource(uint32_t id) {
  switch (id) {
    case SULFUR_ORE:
    case SULFUR_ORE2:
    case SULFUR_ORE3:
    case SULFUR_ORE4:
    case MINI_SULFUR_ORE:
    case METAL_ORE:
    case METAL_ORE2:
    case METAL_ORE3:
    case METAL_ORE4:
    case MINI_METAL_ORE:
    case STONE_ORE:
    case STONE_ORE2:
    case STONE_ORE3:
    case STONE_ORE4:
    case MINI_STONE_ORE:
    case WoodPiles:
    case HEMP:
    case HEMP2:
    case YELLOW_BERRY:
    case BLUE_BERRY:
    case RED_BERRY:
    case GREEN_BERRY:
    case BLACK_BERRY:
    case WHITE_BERRY: return true;
    default: return false;
  }
}

} // namespace Prefabs
