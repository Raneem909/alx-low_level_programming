#include <stdio.h>
/**
 * main - entry point
 * Description: prints a-z
 * Return: 0
*/
int main(void)
{
char letter = 'z';
for (; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
