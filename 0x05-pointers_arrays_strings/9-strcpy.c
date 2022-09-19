#include "main.h"

/**
 * _strcpy - copies and pastes string
 * @dest: pointer to the buffer where we copy the string
 * @src: string to copy
 * Return: to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src +i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
