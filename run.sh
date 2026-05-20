command -v clang-format >/dev/null 2>&1 && \
clang-format -i -style="{BasedOnStyle: LLVM, BreakBeforeBraces: Allman, IndentWidth: 4, KeepEmptyLinesAtTheStartOfBlocks: false}" main.c

clang -std=c89 -Wall -Wextra -Wpedantic -Wshadow -Wconversion -O0 -g -c main.c && \
clang main.o -o main && \
rm main.o && \
(./main; STATUS=$?; rm main; exit $STATUS)
