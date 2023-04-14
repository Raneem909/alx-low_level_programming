#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i;
	int len;

	if (min > max)
		return (NULL);

	len = max - min;
	pointer = malloc(sizeof(int) * (len + 1));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++, min++)
		pointer[i] = min;

	return (pointer);
}
