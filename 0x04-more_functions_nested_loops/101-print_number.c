#include "main.h"

/**
 * print_number - print integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int i = 0;

	if  (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar((1 % 10) + '0');
}
