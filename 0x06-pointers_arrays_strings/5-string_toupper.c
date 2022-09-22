#include "main.h"

/**
 * string_toupper - changes lowercase letters
 * to uppercase in a string
 * @s: string to change
 *
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		       s[i] = s[i] - 32;
	}

	return (s);
}
