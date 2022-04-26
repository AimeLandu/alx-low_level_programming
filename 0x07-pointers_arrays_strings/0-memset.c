#include "main"

/**
 **_memset - function that fills memory with a constant
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 * return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
