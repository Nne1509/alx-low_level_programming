#include <stdio.h>

/**
 *main - this program prints a standard error
 * 
 *Description: using the main function
 *Return: 1
 */


int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
