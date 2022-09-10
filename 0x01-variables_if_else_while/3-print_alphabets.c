#include <stdio.h>

/**
 * main - the program to print the letters a - z and A - Z
 *
 * Return: 0 for success
 */

int main(void)
{
	char c = 'a';
	char D = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (D <= 'Z')
	{
		putchar(D);
		D++;
	}
	putchar('\n');

	return (0);

}
