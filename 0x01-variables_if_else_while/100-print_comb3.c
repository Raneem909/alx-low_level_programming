#include <stdio.h>
/**
 * main - entry point
 * Description: prints 2 digits
 * combination 0f 0-9 seperated by ,
 * Return: 0
*/
int main(void)
{
int digit = 0;
for (; digit <= 9; digit++)
{
int digit2 = 0;
for (; digit2 <= 9; digit2++)
{
if (digit != digit2 && digit < digit2)
{
putchar(digit + 48);
putchar(digit2 + 48);
if (digit + digit2 != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
