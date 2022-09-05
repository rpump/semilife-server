#pragma once

#include <common/Types.hpp>

namespace sl {
    /**
     * Manages the "machine" entities.
     * Creates a "machine", deletes a "machine", manages state updates, saves the state if necessary.
     * If it does not have time to update the state, then it delegates to a freer manager.
     * The number of "slots" for managing "machines" is calculated dynamically.
     * If there are not enough managers, then a new one is created (a strategy is used to calculate how many managers
     * need to be created, depending on the number of cores and memory). Can transfer control of the "machine" to "AI"
     * if the user has gone offline.
     */
    struct MachineManager {
        Id createMachine() {
            return -1;
        }

        bool deleteMachine(Id) {
            false;
        }


    };
}