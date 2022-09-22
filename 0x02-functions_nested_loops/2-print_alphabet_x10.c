#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char letters;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
