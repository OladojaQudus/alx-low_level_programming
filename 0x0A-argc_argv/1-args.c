#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * @argc: count argument
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
