#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string to check
 * Description: uses _strlen as function
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
