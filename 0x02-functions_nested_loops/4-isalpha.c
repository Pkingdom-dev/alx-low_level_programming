#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The character it checks.
 * Return: 1 if c is a letter, lowercase or uppercase.
 * Return: 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
