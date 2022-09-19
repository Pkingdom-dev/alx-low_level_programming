#include <stdio.h>
/**
 * main - entry point
 * Description - print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char base_16;

	for (base_16 = '0'; base_16 <= '9' && ('a' <= base_16 <= 'e'); base_16++)
	{
		putchar(base_16);
	}
	putchar('\n');
	return (0);
}
