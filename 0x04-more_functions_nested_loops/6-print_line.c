#include "main.h"
/**
 * print_line - prints line
 * @n: input
 * Return: line
*/
void print_line(int n)
{
int line;
if (n <= 0)
_putchar('\n');
else
{
for (line = 0; line <= n; line++)
_putchar('_');
_putchar('\n');
}
}
