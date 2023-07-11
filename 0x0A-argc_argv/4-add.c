#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two argumants
 * @argc: arguments count
 * @argv: array of pointers to input string
 * Return: 0 if none is passed, 1 if not integers
*/
int main(int argc, char **argv)
{
int result;
int i;
int count = 0;
if (argc < 3)
printf("0\n");
for (i = 0; i < argc; i++)
{
result = atoi(argv[i]);
if (result > 57 || result < 48)
{
printf("Error\n");
return (1);
}
else
count = count + result;
}
return (count);
}
