#include <stdio.h>
/**
 * main - entry point
 * Description: prints a-z
 * Return: 0
*/
int main(void)
{
char letter = 'a';
for (; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
