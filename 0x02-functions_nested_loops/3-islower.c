#include "main.h"

/**
 * _islower - function checks for lowercase alphabet
 *
 * @c: int used as function argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
