#include <stdio.h>
/**
 * main - entry point
 * Description - print lowercase alphabets in reversed order.
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
