#include "main.h"
void print_numbers(void);
/**
 * _isupper - Entry point
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	putchar('\n');
	return;
}
