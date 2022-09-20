#include <stdio.h>
/**
 * main - entry point.
 * Description - print all possible of a single digits.
 * Return: Aways 0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
