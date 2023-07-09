#include <unistd.h>

int _putchar(char c) {
    char buffer[1] = { c };
    return write(1, buffer, 1);
}

