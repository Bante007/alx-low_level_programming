#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there
 *
 * Main - Entry line of the program */
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
		printf("Zero");
	}
	else
	{
		printf("negative");
	}
	printf("\n");
	return (0);
}
