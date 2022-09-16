#include "main.h"

/**
 * print_line - prints line
 * @n: number of hyphen
 * Return: 0 or 1
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
