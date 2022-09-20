#include <stdio.h>
/**
 * main - More Nested Loops
 * Description -  prints all possible different combinations of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	for (first_digit = '0'; first_digit <= '9'; first_digit++)
	{
		for (second_digit = '0'; second_digit <= '9'; second_digit++)
		{
			for (third_digit = '0'; third_digit <= '9'; third_digit++)
			{
				if ((first_digit < second_digit) && (first_digit < third_digit) && (second_digit < third_digit))
				{
					putchar(first_digit);
					putchar(second_digit);
					putchar(third_digit);
					
					if (third_digit != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
