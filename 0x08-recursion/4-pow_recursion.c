
#include "main.h"
/**
 * _pow_recursion - retuen the value of x powered by y.
 * @x: input number
 * @y: power number
 *
 * Return: x ** y in sucess , -1 if y < 0.
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
