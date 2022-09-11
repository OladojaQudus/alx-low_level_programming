#include <stdio.h>

/**
 * main - the programme prints hexadecimal
 * Return: the end of the program
 */

int main(void)

{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	char c = 'a';

		while (c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar('\n');

		return (0);
}
