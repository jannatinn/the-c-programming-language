command -v clang-format >/dev/null 2>&1 && clang-format -i -style=microsoft main.c
clang $(tr '\n' ' ' < compile_flags.txt) -O0 -g -o main main.c && ./main; rm -rf main main.dSYM
