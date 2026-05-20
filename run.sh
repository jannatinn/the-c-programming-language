clang -std=c89 -Wall -Wextra -Wpedantic -Wshadow -Wconversion -O0 -g -c main.c && clang main.o -o main && rm main.o && (./main; STATUS=$?; rm main; exit $STATUS)
