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

	printf("Size of a char: %c byte(s)\n", sizeof(ch));
	printf("Size of an int: %d bytes(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %lld byte(s)\n", (long long)sizeof(i));
	printf("Size of a float: %f byte(s)\n", sizeof(d));
	return (0);
}
