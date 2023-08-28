#include"main.h"

/**
 * _memset - Entrance point
 * @s: destination pointed
 * @b: consatnt byte
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
