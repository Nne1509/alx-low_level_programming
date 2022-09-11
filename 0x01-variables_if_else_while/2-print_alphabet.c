#include <stdio.h>

/**
 * main - prints objects in lowercase
 * Description: uses main function followed by a new line
 * Return : 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
