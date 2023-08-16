#include <stdio.h>
/**
 * main - Fibonaci sequence that prints 50 seqs
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int c = 3;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);
	while (c <= 50)
	{
		if (c == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		c++;
	}
	return (0);
}

