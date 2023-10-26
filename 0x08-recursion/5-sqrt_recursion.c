#include "main.h"

int _sqrt_helper(int n, int guess);
int _sqrt_recursion(int n);
/**
 * _sqrt_helper - Recursive function to find the square root.
 * @n: Number to find the square root of.
 * @guess: Current guess for the square root.
 * Return: The square root if found, -1 if not.
 */
int _sqrt_helper(int n, int guess)
{
	if ((guess * guess) == n)
	{
		return (guess);
	}

	if (guess == n / 2)
	{
		return (-1);
	}

	return (_sqrt_helper(n, guess + 1));
}
