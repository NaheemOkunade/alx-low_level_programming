#include <stdio.h>
/**
 * main = Entry point
 * 
 * Return: Always 0 (success)
 */
int main(void)
{
	char up = 'A';
	char low = 'a';

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	putchar('\n');
	return (0);
}
