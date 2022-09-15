#include "main.h"

/**
 * isupper - tells upper case
 *Return: 0
 * @c: the letter
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else
		return (0);
}
