#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * returns in failure-> 98.
 */
void *malloc_checked(unsigned int b)
{
	char *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
