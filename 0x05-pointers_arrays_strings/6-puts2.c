#include "main."
/**
 * puts2 - prints one char out of 2 of a string
 * @str: intput string.
 * Return: no return.
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == )
			_putchar(str[count]);
		count++;
	}
}
