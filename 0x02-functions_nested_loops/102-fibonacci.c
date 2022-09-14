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

	printf("%d", a);
	putchar(',');
	putchar(' ');
	printf("%d", b);
	putchar(',');
	putchar(' ');

	for (d = 1; d <= 50; d++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
