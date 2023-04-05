#include <main.h>
/**
 * print_reverse - prints string in reverse
 * @s: input
*/

void print_reverse(char *s)
{
    if (*s != '\0') {
        print_reverse(s + 1);
        putchar(*s);
    }
}

