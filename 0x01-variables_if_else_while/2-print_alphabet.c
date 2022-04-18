#include <stdio.h>
/**
 * main -Entry point
 * 
 * alphabet in lowercase
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	return (0);
}
