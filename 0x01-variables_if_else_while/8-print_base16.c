#include <stdio.h>

/**
 * main - the programme prints hexadecimal
 * Return: the end of the program
 */

int main(void)

{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
