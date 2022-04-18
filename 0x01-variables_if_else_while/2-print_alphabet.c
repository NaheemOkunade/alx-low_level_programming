#include <stdio.h>
/**
 * 
 * main - Entry point
 * 
 * Must print alphabet in lower case
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar("%c", alphabet);
		alphabet++;
	}

	return (0);
}
