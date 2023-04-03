#include "main.h"
/**
 * _strlen - detrmin the length of the string
 * @s: input
 * Return: nothing
*/
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
counter++;
return (counter);
}

