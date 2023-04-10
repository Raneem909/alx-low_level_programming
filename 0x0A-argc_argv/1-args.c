#include "stdio.h"
/**
 * main - entry point
 * @argv: array of entered arguments
 * @argc: count for entered arguments
 * Return: none
*/
int main(int argc, char const **argv)
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
