#include <stdio.h>

/**
 * main - the program that prints the various sizes of types on the computer
 *
 * Return: 0 if success
 */

int main(void)

{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %li byte(s)\n", sizeof(int));
	printf("size of long int: %li byte(s)\n", sizeof(long int));
	printf("size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of float: %ld byte(s)", sizeof(float));

	return (0);
}
