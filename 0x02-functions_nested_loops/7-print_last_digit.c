#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: 0
 * @i: the integer
 */

int print_last_digit(int i)
{
	int a, b;

	a = i % 10;
		if (a < 0)
			a = -a;
		b = '0' + a;
		_putchar(b);
		return (a);
}
