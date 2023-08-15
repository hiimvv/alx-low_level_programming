#include "main.h"
/**
 *  print_last_digit - A function that p[rints he last digit of a number
 *  @i: the input value
 *  Return: lways 0
 */

int print_last_digit(int i)
{
	int ld;

	ld = i % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
