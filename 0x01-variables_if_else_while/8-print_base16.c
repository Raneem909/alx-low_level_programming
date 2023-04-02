#include <stdio.h>
/**
 * main - entry point
 * Description: prints 0-9 a-f
 * Return: 0
*/
int main(void)
{
int digit = 48;
for (; digit <= 57 ; digit++)
putchar(digit);
digit = 97;
for (; digit <= 102 ; digit++)
putchar(digit);
putchar('\n');
return (0);
}
