#include "main.h"
char *_strcat(char *dest, char *src);
/**
 * *_strcat - concat strings
 *
 * Return: pointer (string)
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (dest);
}
