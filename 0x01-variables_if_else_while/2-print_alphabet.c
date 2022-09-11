#include <stdio.h>

/**
 * main - prints objects in lowercase
 * 
 * Description: uses main function
 * Return : 0
 */
int main(void)
{
	char alp[26] = 'abcdefghiklmnopqrstuvwxyz';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
