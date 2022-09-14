#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;

	a = 1;
	b = 2;

	printf("\n%d", a);
	printf("\n%d", b);

	for (d = 1; d <= 50; d++)
	{
		c = a + b;
		printf("\n%d", c);
		a = b;
		b = c;
	}
	return (0);
}
