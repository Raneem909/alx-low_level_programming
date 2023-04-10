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

	if (argc != 3)
	{
		return (printf("Error\n"), 1);
	}

	int result = atoi(argv[1] * argv[2]);

	printf("%d\n", result);

	return (0);
}

