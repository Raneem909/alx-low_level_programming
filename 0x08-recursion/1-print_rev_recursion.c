#include <main.h>
/**
 * print_reverse - prints string in reverse
 * @s: input
*/

void _print_rev_recursion(char *s)
{
    if (*s != '\0') {
        _print_rev_recursion(s + 1);
        putchar(*s);
    }
}

