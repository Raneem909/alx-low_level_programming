#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
int sum = 0;
int i;
if (argc == 1)
printf("%d\n", sum);
for (i = 1; i < argc; i++)
{
if (*argv[i] < '0' || *argv[i] > '9')
return (printf("Error\n"), 1);
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
