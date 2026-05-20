command -v clang-format >/dev/null 2>&1 && clang-format -i -style=file main.c
clang $(tr '\n' ' ' < compile_flags.txt) -O0 -g -c main.c && clang main.o -o main && rm main.o && ./main; rm main
