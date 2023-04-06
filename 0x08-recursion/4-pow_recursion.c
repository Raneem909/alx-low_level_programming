#include "holberton.h"
/**
 * _pow_recursion - x raised to the
 * power of y.
 *
 * @x: input number
 * @y: power number
 *
 * Return: if "y" > raised to the power of "y",
 * return -1 if "y" < 0, return 1 if "y" = 0 
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
