#include "main.h"
/**
 * print_rev - reversed string
 * @s: input
 * Return: none
*/
void print_rev(char *s)
{
int i;
int count = 0;
for (; *(s + count) != '\0'; count++);
for (i = count - 1; i >= 0; i--)
_putchar(s[i] + 0);
_putchar('\n');
}

