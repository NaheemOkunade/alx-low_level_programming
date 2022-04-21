#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char ch;
	float d;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %d bytes(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long i));
	printf("Size of a float: %i byte(s)\n", sizeof(d));
	return (0);
}
