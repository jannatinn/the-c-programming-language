command -v clang-format >/dev/null 2>&1 && clang-format -i -style=microsoft main.c
clang $(tr '\n' ' ' < compile_flags.txt) -O0 -g -c main.c -o main && ./main; rm main; rm main.dSYM
