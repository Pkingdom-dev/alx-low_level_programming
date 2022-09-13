#include <stdio.h>
/**
 * main - entry point
 * Description - use putchar to print number from "0" to "9"
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
