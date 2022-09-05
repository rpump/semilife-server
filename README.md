# semilife-server

# DONE
- Entities
  - Machine (status: draft)

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

```shell
pip install conan
git clone https://github.com/rpump/semilife-server.git
cd semilife-server
mkdir build
cd build
conan install --build missing ..
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build . --config Release
```
  
