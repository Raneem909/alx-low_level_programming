#include "main.h"
/**
 * _puts - prints str & new line
 * @str: input
 * Return: none
*/
void _puts(char *str)
{
while (str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n')
}
