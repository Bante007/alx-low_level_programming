#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d " n, n);
	if (n > 5)
	{
	printf ("and is greater than 5")
	}
	else if (n == 0)
	{
		printf ("and is 0")
	}
	else if ((n < 6) != 0)
	{
		printf ("and is less than 6 and not zero")
	}
	printf ("\n")
	return (0);
}
