#include "main.h"

/**
 * _isupper - checks if an alphabet is uppercase
 * @c: tested character
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
