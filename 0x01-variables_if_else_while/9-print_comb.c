#include <stdio.h>
/**
 * main - entry point
 * Description: prints digits from 0-9 seperated by ,
 * Return: 0
*/
int main(void)
{
int digit = 0;
for (; digit <= 9; digit++)
{
putchar(digit + 48);
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
