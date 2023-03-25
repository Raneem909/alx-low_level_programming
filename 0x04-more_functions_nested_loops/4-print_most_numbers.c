#include "main.h"
/**
 * print_most_numbers - prints nums 0-9 except2,4
 * Return: 0
*/
void print_most_numbers(void);
{
int num
for (num = 0; num <= 9; num++)
if (num == 2 || num == 4)
continue;
_putchar(num +48);
}
