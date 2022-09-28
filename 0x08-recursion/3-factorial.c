#include "main.h"

/**
 * factorial - to find factorial
 * @n: number
 * Return: the factorial if the number is greater than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
