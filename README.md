MUXMul
Sam Pluta
Free and open source
Released under GPLv3

Run the following from this directory to build from source using cmake

mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DSC_PATH=<PATH TO SC SOURCE>
cmake --build . --config Release

It will create the .scx files for MUXMul10 and MUXMul100, two different MultiPlexer Multipliers, one with 10 and with 100 channels
