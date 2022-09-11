#include <stdio.h>

/**
 * main - for printing alphabets from the back
 *
 * Return: the end of the program
 */
int main(void)

{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
