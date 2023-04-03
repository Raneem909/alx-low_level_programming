#include "main.h"
/**
 * _strchr - locates char in string
 * @s: string
 * @c: character
 * Return: pointer to first occurence or null
 * if not found
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;
for (; i != '\n'; i++)
{
if (s[i] == c)
return (s + i);
else
return ('\0');
}
}
