#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the last digit of any random number
 * using the printf function. Each program is printed on a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf ("Last digit of %d is %d " n, n);
	if (n > 5)
	{
	printf ("and is greater than 5");
	}
	else if (n == 0)
	{
		printf ("and is 0");
	}
	else if ((n < 6) != 0)
	{
		printf ("and is less than 6 and not zero");
	}
	printf ("\n");
	return (0);
}
