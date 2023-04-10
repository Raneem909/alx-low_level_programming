#include "stdio.h"
/**
 * main - entry point
 * @argv: array of entered arguments
 * @argc: count for entered arguments
 * Return: none
*/
int main(int argc, char const **argv)
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
