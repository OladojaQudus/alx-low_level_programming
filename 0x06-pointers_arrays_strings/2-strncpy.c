#include "main.h"

/**
 * Return: dest
 * _strncpy - copies strings
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
