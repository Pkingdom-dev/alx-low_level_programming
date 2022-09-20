#include <stdio.h>
/**
 * main - Nested Loops
 * Description - print all possible of different combination of two digit.
 * Return: Always 0 (success)
 */
int main(void)
{
	int first_digit, second_digit;

	for (first_digit = '0'; first_digit <= '9'; first_digit++)
	{
		for (second_digit = '0'; second_digit <= '9'; second_digit++)
		{
			if (first_digit < second_digit)
			{
				putchar(first_digit);
				putchar(second_digit);

				if (first_digit != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
