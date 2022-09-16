#include "main.h"

/**
 * _isdigit - to check digit
 * @c: the digit
 * Return: 0 or otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
