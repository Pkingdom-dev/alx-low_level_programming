#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of character
 * @size : size of an array
 * @c : character
 * Return: a pointer f an array char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *character;

	if (size == 0)
	{
		return (NULL);
	}

	character = (char *) malloc(size * sizeof(char));
	if (character == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		character[i] = c;
	}

	return (character);
}
