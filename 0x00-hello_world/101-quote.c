#include <unistd.h>
/**
 * main - entry point
 * Description: print string using write function
 * Return: 1
*/
int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, text, 59);
return (1);
}
