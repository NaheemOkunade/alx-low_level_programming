#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int singles = 0;

	while (singles <= 9)
	{
		singles++;
		putchar(singles);
	}

	putchar('\n');
	return (0);
}
