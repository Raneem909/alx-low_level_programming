#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string to manipulate
 * @b: constant byte
 * @n: numbers of filling
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; n > 0; i++, n--)
*(s + i) = b;
return (s);
}
