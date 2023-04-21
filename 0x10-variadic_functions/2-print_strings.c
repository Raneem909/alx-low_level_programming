#include "variadic_functions.h"

/**
 * print_strings - prints entered strings
 * @separator: parameter seperates those strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
char *str;

va_start(ptr, n);
for (i = 0; i < n; i++)
{
str = va_arg(ptr, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
