#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z'
 * using the putchar function. Each letter is printed on a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';  // Start with 'a', the first lowercase letter

    while (letter <= 'z')  // Keep printing until 'z' is reached
    {
        putchar(letter);  // Print the current letter
        letter++;  // Move to the next letter
    }

    putchar('\n');  // Print a new line at the end

    return 0;
}
