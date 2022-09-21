#include "main.h"
/**
 * main - entry point
 * Description - print alphabets in lowercase followed by a line.
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	return (0);
}
