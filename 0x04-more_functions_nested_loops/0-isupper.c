#include "main.h"

/**
 * _isupper - Check if the letter is uppercase
 * @c: The character to be checked
 * Return: 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
