#include "main.h"
#include <stdio.h>

/**
 * print_array - to print array of string
 * @a: pointer
 * @n: number to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
