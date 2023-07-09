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
int i;
for (i = 0; i >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
