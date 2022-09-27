#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates the first occurence of a substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to the beginning of the substring
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
