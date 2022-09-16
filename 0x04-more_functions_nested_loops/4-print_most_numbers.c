#include "main.h"

/**
 * print_most_numbers - print some numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = 0;

	if (i <= 9 && (i != 2 || i != 4))
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
