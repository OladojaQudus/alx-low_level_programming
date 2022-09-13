#include "main.h"

/**
 * _isalpha - checks for alphabet
 * Return: zero if null
 * @c: input
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
