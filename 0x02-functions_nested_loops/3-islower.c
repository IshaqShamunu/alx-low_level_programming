#include "main.h"

/**
 * _islower - to check lowercase
 * @c: Is the character to be checked
 * Return: 1 if its lowercase 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
