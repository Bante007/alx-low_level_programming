#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number, stores it in the
 * variable 'n', and prints the last digit of 'n' along with a description.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);
	if (n > 0)
	{
		printf("positive");
	}
	else if (n == 0)
	{
		printf("zero");
	}
	else
	{
		printf("negative");
	}
	printf("\n");
	return (0);
}
