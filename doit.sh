#!/bin/bash
set -e
cd "$(dirname "$0")"
rm -rf obj_dir

verilator -Wall --trace --cc rtl/mux2.sv \
    --exe tests/mux2.cpp \
    --top-module mux2 \
    -CFLAGS "-std=c++17" \
    -LDFLAGS "-lgtest -lpthread" \
    --build -j 4

# Run from tests/ so $readmemh can find instruction.mem
obj_dir/Vmux2