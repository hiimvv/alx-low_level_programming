#include "main.h"

/**
 * _isalpha - A function that checks if an input is alphabet using (ascii NS)
 * @c: the input to be checked
 * Return: Always 1 for lowercase . 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
{
	if (c != 91 && c != 92 && c != 93 && c != 94 && c != 95 && c != 96)
		return (1);
}
return (0);
}
