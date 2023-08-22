#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input that is being proccessed
 * Return: print of the string
 */

void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int r;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (r = 0 ; r <= t ; r++)
	{
		if (r % 2 == 0)
	{
		_putchar(str[r]);
	}
	}
	_putchar('\n');
}
