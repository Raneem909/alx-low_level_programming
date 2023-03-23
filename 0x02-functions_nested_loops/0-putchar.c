#include "main.h"
/**
 * main -entry point
 * Description: prints _putchar
 * Return: 0 in success
*/
int main(void)
{
char word[] = "_putchar";
int count;
for (count = 0; count < 8; count++)
_putchar(word[count]);
_putchar('\n');
return (0);
}
