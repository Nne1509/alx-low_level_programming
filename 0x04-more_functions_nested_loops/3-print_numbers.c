#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar(10);
}
