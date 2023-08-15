#include "main.h"

/**
 * print_alphabet_x10 - A program that prints the alphabet 10times
 * Return: Always lettters .
 */

void print_alphabet_x10(void)
{
	char e;
	int w = 1;

while (w <= 10)
{
	for (e = 'a'; e <= 'z'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
	w++;
}
}
