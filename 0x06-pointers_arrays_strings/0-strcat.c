#include "main.h"

/**
 * _strcat - catenate two strings
 * @dest: string to append by src
 * @src: string to be append by dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
