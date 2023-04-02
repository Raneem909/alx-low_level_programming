#include <stdio.h>
/**
 * main - entry point
 * Description: prints 3 digits
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
int digit3 = 0;
for (; digit3 <= 9; digit3++)
{
if (digit != digit2 && digit < digit2 && digit2 < digit3 && digit2 != digit3)
{
putchar(digit + 48);
putchar(digit2 + 48);
putchar(digit3 + 48);
if (digit + digit2 + digit3 != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
