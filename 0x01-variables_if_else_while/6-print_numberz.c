#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int single = 0;

	while (single <= 9)
	{
		printf("%i", single);
		single++;
	}

	putchar('\n');
	return (0);
}
