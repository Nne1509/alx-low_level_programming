#include "main.h"

/** 
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if both strings are equal
 * less than 0 if s2 is greater than s1
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
