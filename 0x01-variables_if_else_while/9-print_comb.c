#include <stdio.h>

/**
 * main - the program prints all combination of single digit number
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 47; n < 58; n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
