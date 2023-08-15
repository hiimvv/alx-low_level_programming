#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @n: the integer to be checked
 * Return: Always positive integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		int absolute;

		absolute = n * -1;
		return (absolute);
	}
	else
	{
		return (n);
	}
}
