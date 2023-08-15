#include "main.h"

/**
 * _islower - A function that checks if an input is lowercase using (ascii NS)
 * @c: the input to be checked
 * Return: Always 1 for lowercase . 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
