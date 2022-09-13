#include <stdio.h>

/**
 * main - entry point
 * Description - print alphabet both lowercase and uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return(0);
}
