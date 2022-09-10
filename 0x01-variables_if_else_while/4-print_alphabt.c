#include <stdio.h>

/**
 * main - the proggramme prints lower case alphabets except q and e
 *
 * Return: 0 for succes
 */

int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
		putchar('\n');

	}
		return (0);
	

}
