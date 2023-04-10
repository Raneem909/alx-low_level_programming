#include "stdio.h"
/**
 * main - multiplies two numbers
 * @argc: number of given arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
(void)argv;
int result, num1, num2;

	if (argc != 3)
	{
		return (printf("Error\n"), 1);
	}

	result = _atoi(num1 * num2);

	printf("%d\n", result);

	return (0);
}

