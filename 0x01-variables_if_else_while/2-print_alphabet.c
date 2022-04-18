#include <stdio.h>
/**
 * main -Entry point
 * 
 * alphabet in lowercase
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
