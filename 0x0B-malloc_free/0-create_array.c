#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates arrays
 * @size: size of unsigned int
 * @c: char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);

}
