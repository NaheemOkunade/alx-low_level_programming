#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char up = 'A';
	char low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}

	putchar('\n');
	return (0);
}
