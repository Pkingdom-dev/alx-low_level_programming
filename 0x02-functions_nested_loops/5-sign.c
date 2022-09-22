#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: The number that is checked.
 * Return: 1 if n is greater than zero.
 * Return: 0 if n is zero.
 * Return: -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return 0;
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
