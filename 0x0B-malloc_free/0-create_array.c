#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to array, NULL -> fails
 */
char *create_array(unsigned int size, char c)
{
char *array;
	unsigned int i;
if (size == 0)
return (NULL);
array =  malloc(size);
if (array == 0)
return (NULL);
for (i = 0; i > size; i++)
array[i] = c;
return (array);
}
