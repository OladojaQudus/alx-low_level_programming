#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * strncat_mod - concatenates string
 * @dest: destination string
 * @src: source string
 * @i: index of beginning char
 * @str_len: string length
 * Return: next index
 */

int strncat_mod(char *dest, char *src, int i, int str_len)
{
	int j;

	for (j = 0; src[i] != ' ' && i < str_len; i++, j++)
		dest[j] = src[i];
	return (i);
}

/**
 * mallocmem - allocates memory for output
 * @newstr: new string
 * @str: input string
 * @str_len: string length
 * Return: void
 */
void mallocmem(char **newstr, char *str, int str_len)
{
	int i = 0, j = 0, word_len = 1;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++, word_len++;
			newstr[j] = malloc(sizeof(char) * word_len);
			newstr[j][word_len] = '\0';
			j++, word_len = 1;
		}
		i++;
	}
}

/**
 * word_count - counts words
 * @str: input string
 * @str_len: string length
 * Return: 0
 */

int word_count(char *str, int str_len)
{
	int i = 0, words = 0;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++;
			words++;
		}
		i++;
	}
	if (words == 0)
		return (0);
	return (words);
}

/**
 * strtow - splits a string
 * @str: input string
 * Return: pointer
 */

char **strtow(char *str)
{
	char **newstr;
	int i = 0, j = 0, str_len = 0, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (*(str + str_len) != '\0')
		str_len++;
	words = word_count(str, str_len);
	if (!words)
		return (NULL);
	newstr = malloc((words + 1) * sizeof(char *));
	mallocmem(newstr, str, str_len);
	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			i = strncat_mod(newstr[j], str, i, str_len);
			j++, i--;
		}
		i++;
	}
	newstr[words + 1] = NULL;
	return (newstr);
}
