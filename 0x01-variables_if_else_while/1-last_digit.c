#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/* more headers goes there */
/*
 * main - entry point
 *
 * Description: last digin number
 *
 * Result: always (0)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	return (0);
}
=======

/**
 * main - entry point
 * Description: return the lat digit of n and
 * determine if it is 0,>5,<6
 * Return: 0
*/
int main(void)
{
int digit;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, digit);
if (digit == 0)
printf("Last digit of %i is %i and is 0\n", n, digit);
if (digit < 6 && digit != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
return (0);
}

>>>>>>> 70d7fbc094fd1cf2adf6ec542ad3b8a59822031c
