#include <stdio.h>
/**
 * main - entry point
 * Description: prints a-z A-Z
 * Return: 0
*/
int main(void)
{
int digit = 65;
for (; letter <= 90 && 97 <= digit <= 122; letter++)
putchar(digit);
putchar('\n');
return (0);
}
