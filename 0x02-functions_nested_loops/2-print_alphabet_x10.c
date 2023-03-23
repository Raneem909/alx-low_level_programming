#include "main.h"
/**
 * print_alphabet_x10 - used in _putchar to print alphabets 10 times
*/
void print_alphabet_x10(void)
{
int count, n;
for (n = 0; n <= 9, n++)
{
for (count = 'a'; count <= 'z', count++)
_putchar(count);
_putchar('\n');
}
}
