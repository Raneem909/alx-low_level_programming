#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of given argument
 * @...: entered argument
 * Return: sum if sucess , 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
int sum = 0;
if (n == 0)
return (0);
va_start(ptr, n);
for (i = 0; i < n; i++)
sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}
