#include <stdio.h>
/**
 * main - entry point
 * Description : Combination of Two-Digit Numbers
 * Return: 0
*/
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
if (j != i)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i != 98 || j != 99)
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

