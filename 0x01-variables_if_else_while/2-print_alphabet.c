#include <stdio.h>

/**
 * main - the program prints the letter a - z
 *
 * Return: 0 for success
 */

int main(void)
{
	char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
	putchar('\n');

		return (0);
}
