#include "main.h"

/**
 * _islower - vhcks for lower case
 *
 * @c: the charactr to test
 * Return: 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
