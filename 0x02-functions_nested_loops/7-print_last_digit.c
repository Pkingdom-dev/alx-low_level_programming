#include "main.h"
/**
 * print_last_digit -function that prints the last digit of a number.
 * @num: The number to be checked.
 * Return: Always 0 (success)
 */
int print_last_digit(int num)
{
	int digit;

	if (num < 0)
	{
		num = -num;
	}

	digit = num % 10;

	if (digit < 0)
	{
		digit = -digit;
	}
	
	_putchar(digit + '0');

	return (digit);
}
