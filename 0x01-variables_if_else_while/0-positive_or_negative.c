#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description - Checking if n is positive, zero or negative
 * Return: Always 0 (success)
 */
int  main(0)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is postive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
