# semilife-server

# DONE
- Entities
  - Machine (status: draft)
- Managers
  - MachineManager (status: draft)
- Common types
  - Coord
  - Velocity

# TODO

- Entities
  - Machine
    - Parts
- Generators
- "AI"
- EventLoops
- Accounts
- Managers
- Login server role
- Game server role
- TCP\WebSocket proto
- Scaling
- etc

# HOWTO

## BUILD

### PREREQUISITES

- CMake (https://cmake.org/download/)
- Conan (https://conan.io/downloads.html)
- ninja (https://ninja-build.org/)
- gcc\clang etc
- git

### BUILD PROCESS

Clone the repo:
```shell
git clone https://github.com/rpump/semilife-server.git
cd semilife-server
```

Create a build dir & build:
```shell
mkdir build && cd build && conan install --build missing ..
cmake -DCMAKE_BUILD_TYPE=Release .. && cmake --build . --config Release
```
  
