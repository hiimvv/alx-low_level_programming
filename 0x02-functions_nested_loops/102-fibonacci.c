#include <stdio.h>

/**
 * main - A program that prints the first 50 fibbonaci sequenec numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int t1 = 0, t2 = 1;
	long int nextTerm = t1 + t2;
	int n = 50;

	for (i = 3; i <= n; i++)
	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
return (0);
}
