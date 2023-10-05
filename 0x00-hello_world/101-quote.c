#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	const char *message = 	"and that piece of art is uesful\" - "
				"Dora Korpar, 2015-10-19\n":
	ssize_t len = 0;

	while (message[len] != '\0')
	{
		len++;
	}

	write(2, message, len); /* Use write to print to standard error
				   (file descriptor 2) */

	return (1); /* Retunr 1 to indicate an error */
}
