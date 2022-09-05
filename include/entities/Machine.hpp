#pragma once

#include "../common/Types.hpp"

namespace sl {
    template <typename Coord, typename Velocity>
    struct Machine {
        Id id_;
        std::string name_;
        Coord coord_;
        Velocity velocity_;
    };
}