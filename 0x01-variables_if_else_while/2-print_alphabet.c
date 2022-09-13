#include <stdio.h>

/**
 * main - entry point
 * Description - print alphabets in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets++);
		putchar(\n);
	return (0);
}
