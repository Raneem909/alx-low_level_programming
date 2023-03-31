#include "main.h"
/**
 *  _strcat - concatenates 2 strings
 *  @dest: destination
 *  @src: source
 *  Return: dest
*/
char *_strcat(char *dest, char *src)
{
int n = 0;
int i = 0;
while (dest[n])
n++;
for (; i != '\0'; i++)
dest[n++] = src[i];
return (dest);
}
