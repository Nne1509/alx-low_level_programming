#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for the first
 * occurence of any bytes from accept
 * @s: string to search
 * @accept: string containing bytes to search for
 * Return: pointer to the byte in s that matches
 * one of the bytes in accept or NULL if no byte
 * is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
