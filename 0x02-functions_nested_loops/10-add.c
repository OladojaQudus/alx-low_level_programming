#include "main.h"

/**
 * add - the program adds two numbers
 *
 * @i: first numbr
 * @j: second number
 * Return: 0
 */

int add(int i, int j)
{
	int k;

	k = i + j;

	if (k < 0)
	{
		k = -k;
	}
	putchar((k / 10) + '0');
	putchar((k % 10) + '0');
	return (0);
}
