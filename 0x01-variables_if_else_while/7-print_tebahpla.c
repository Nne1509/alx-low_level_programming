#include <stdio.h>

/**
 * main - prints alphabet in lowercase in reverse
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
