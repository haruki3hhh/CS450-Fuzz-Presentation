# CS450-Fuzz-Presentation

### How to re-compile AFL
```bash
cd AFL && make clean && make
```
### How to compile native test.c
```bash
gcc test.c -o test
```
### How to compile with AFL
```bash
AFL/afl-gcc test.c -o afl_test
```
### How to run with AFL
```bash
AFL/afl-fuzz -i sample -o out ./afl_test
```
### How to reproduce AFL crashes
```bash
./afl_test < out/crashes/<sample_id>
```
