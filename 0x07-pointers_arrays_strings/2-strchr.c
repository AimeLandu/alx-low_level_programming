#include "main.h"

/**
 * *strchr - locates character in string
 * @c: character to find
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
		}
		return (s);
	}
}
