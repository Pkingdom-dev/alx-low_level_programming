#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @num: number to be checked.
 * Return: Always o (success)
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
