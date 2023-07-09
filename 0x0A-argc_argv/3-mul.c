#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of 2 numbers
 * @argc: passed arguments counter
 * @argv: array of pointers
 * Return: zero in sucess
*/
int main(int argc, char **argv)
{
int result;
if (argc < 2)
{
printf("Error\n");
return (1);
}
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
