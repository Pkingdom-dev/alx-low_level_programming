#include <stdio.h>

/**
 * main - entry point
 * Description - print all letters execept 'q' and 'e'
 * Return: Always 0 (success)
 */
int main (void)
{
	int letters;
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
	}
	putchar(letters);
	return (0);
}
