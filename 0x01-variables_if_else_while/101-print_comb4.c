#include <stdio.h>
/**
 * main - More Nested Loops
 * Description -  prints all possible different combinations of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	for (first_digit = '0'; first_digit <= '7'; first_digit++)
	{
		for (second_digit = '1'; second_digit <= '8'; second_digit++)
		{
			for (third_digit = '2'; third_digit <= '9'; third_digit++)
			{
					putchar(first_digit);
					putchar(second_digit);
					putchar(third_digit);
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
