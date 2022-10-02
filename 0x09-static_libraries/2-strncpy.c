#include "main.h"

/**
 *  _strncpy - copies n bytes
 *  @dest: string to copy to
 *  @src: string being copied
 *  @n: largest
 *  Return: dest
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
