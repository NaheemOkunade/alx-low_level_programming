#include "main.h"
void print_alphabet(void);
/**
 * function - print_alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet =  'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
