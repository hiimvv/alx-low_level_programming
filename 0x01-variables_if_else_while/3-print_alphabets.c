#include <stdio.h>
/**
 * main - A program that prints upper and lowercase
 * Return: Always 0
 */

int main(void)
{
	char alx[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alx[i]);
	}
	putchar('\n');
	return (0);
}

