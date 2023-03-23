#include "main.h"
/**
 * print_sign - determine char sign
 * @n: input
 * Return: 0,1,-1
*/
int print_sign(int n)
{
if (n > 0)
{
_puchar(43);
return (1);
}
else if (n == 0)
{
_puchar(48);
return (0);
}
else
{
_puchar(45);
return (-1);
}
}
