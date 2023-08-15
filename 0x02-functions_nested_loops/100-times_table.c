#include "main.h"

/**
 * print_times_table - Prints the times table of the input between 0 to 15
 * @i: The value of the times table to be printed.
 * Return: the timetable value of the input
 */

void print_times_table(int i)
{
	int n, multi, product;

	if (i >= 0 && i <= 15)
	{
		for (n = 0; n <= i; n++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				product = n * multi;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
