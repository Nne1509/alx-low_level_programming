#include "main.h"
#include <stdio.h>

/**
 * _abs - function computes the absolute value of an int
 *
 * @c: int used as function argument
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
