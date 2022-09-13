#include <stdio.h>

#include "main.h"

/**
 * main - the program prints a - z
 *
 * Return: (0)
 */

int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
