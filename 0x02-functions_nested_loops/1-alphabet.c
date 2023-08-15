#include "main.h"

/**
 * main - A program that prints the alphabetic letters
 * Return: Always lettters .
 */

void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
}
