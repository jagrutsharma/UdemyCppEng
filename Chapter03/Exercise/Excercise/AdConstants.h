#pragma once

#include <cstdint>
#include <cstdlib>

namespace Ad
{
namespace Constants
{

constexpr auto EGO_VEHICLE_ID = std::int32_t{-1};

// The below is const and hence can be used for initializing arrays
constexpr auto NUM_VEHICLES_ON_LANE = std::size_t{2};

constexpr auto VIEW_RANGE_M = 100.0F;

} // namespace Constants
} // namespace Ad
