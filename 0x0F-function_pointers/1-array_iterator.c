#include "function_pointers.h"
/**
 * array_iterator - executes a function given as pointer
 * iteratively on an array element
 * @array: given array
 * @size: given size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
for (; array < size; array++)
action(array);
}
