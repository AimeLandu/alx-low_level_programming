#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;

while (accept[j])
{
if (s[i] == accept[j])
{
s += i;
return (s);
}
j++;
}
i++;
}
return ('\0');
}
