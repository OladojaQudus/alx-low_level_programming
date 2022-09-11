#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main - the program prints three numbers
 *
 * Return: 0 if success
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (c < 7)
					{

					putchar(',');
					putchar(' ');
					}
				}
		}
	}
	putchar('\n');

	return (0);
}
