#include <stdio.h>

/**
 * main - prints alphabet in lowercase in reverse
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
