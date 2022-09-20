#include <stdio.h>
/**
 * main - entry point
 * Description - print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char base_16, base16;

	for (base_16 = '0'; base_16 <= '9'; base_16++)
	{
		putchar(base_16);
	}

	base16 = 'a';
	do {
		putchar(base16);
		base16++;
	} while (base16 <= 'f');

	putchar('\n');
	return (0);
}
