# RISC-V-for-learning

A RISC-V CPU written in SystemVerilog as a learning project, verified with Verilator and GoogleTest.

## Status

Work in progress: building a **single-cycle** CPU (on the `single-cycle` branch).

| Module | Description | Tested |
|--------|-------------|--------|
| `rom`  | Byte-addressed instruction memory (4 KB), little-endian, combinational read | ✅ |
| `mux2` | 2-to-1 multiplexer, parameterised width | ✅ |

## Layout

```
rtl/            SystemVerilog source
verification/   GoogleTest testbenches and test programs (.mem)
doit.sh         Build and run a testbench with Verilator
```

## Requirements

- [Verilator](https://verilator.org) (tested with 4.226)
- GoogleTest (`libgtest`)

## Running tests

```bash
./doit.sh
```
