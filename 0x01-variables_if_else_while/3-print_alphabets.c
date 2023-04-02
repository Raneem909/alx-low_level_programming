#include <stdio.h>
/**
 * main - entry point
 * Description: prints a-z A-Z
 * Return: 0
*/
int main(void)
{
int digit = 97;
for (; digit <= 122 ; digit++)
putchar(digit);
digit = 65;
for (; digit <= 90 ; digit++)
putchar('\n');
return (0);
}
