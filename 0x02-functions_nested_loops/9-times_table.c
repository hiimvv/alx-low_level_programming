#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 * Returm: Always the product value
 */

void times_table(void)

{
	int n, multi, product;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			product = n * multi;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
