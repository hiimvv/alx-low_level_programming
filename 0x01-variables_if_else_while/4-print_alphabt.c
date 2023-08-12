#include <stdio.h>
/**
 * main - A program that prints upper and lowercase
 * Return: Always 0
 */
int main(void)
{
	char alx[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;
	for (i = 0; i < 26 ; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alx[i]);
		}
	}
	putchar('\n');
	return (0);
}
