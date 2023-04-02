#include <stdio.h>
/**
 * main - entry point
 * Description: prints a-z exept q ,e
 * Return: 0
*/
int main(void)
{
char letter = 'a';
for (; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
continue;
putchar(letter);
}
}
putchar('\n');
return (0);
}
