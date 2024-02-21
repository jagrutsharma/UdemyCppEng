#pragma once

#include <cstdint>

#include "AdConstants.h"

namespace Ad
{
namespace Types
{

using namespace Ad::Constants;

enum class LaneAssociationType
{
    LEFT,
    CENTER,
    RIGHT,
    NONE,
};

struct VehicleType
{
    std::int32_t id;
    LaneAssociationType lane;
    float speed_mps;
    float distance_m;
};

struct NeighborVehiclesType
{
    // One array for each lane
    // NUM_VEHICLES_ON_LANE is const, so it can be used to define array
    // NUM_VEHICLES_ON_LANE is actually Ad::Constants::NUM_VEHICLES_ON_LANE
    // Since we added the 'using namespace' on top of file, it is ok to leave the prefix.
    std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_left_lane;
    std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_center_lane;
    std::array<VehicleType, NUM_VEHICLES_ON_LANE> vehicles_right_lane;
};

} // namespace Types
} // namespace Ad
