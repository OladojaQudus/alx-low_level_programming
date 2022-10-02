#include "main.h"
#include <stdio.h>

/**
 * _strlen - tells length of a string
 * @s: pointer
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

			return (i);
}
