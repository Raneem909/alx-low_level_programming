#include <stdio.h>
/**
 * main - entry point
 * Description: prints a-z A-Z
 * Return: 0
*/
int main(void)
{
int digit = 65;
for (; digit <= 90 && 97 <= digit <= 122; digit++)
putchar(digit);
putchar('\n');
return (0);
}
