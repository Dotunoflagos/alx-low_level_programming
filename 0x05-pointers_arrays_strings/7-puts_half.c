#include "main.h"
/**
* puts_half - prints the alphabet in lowercase, followed by a new line.
* @str: super story
* Return: count
*/

void puts_half(char *str)
{
	int i, d;
	int len = 0;
	char c;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
		d = (len + 1) / 2;
	else
		d = len / 2;
	for (i = d; i <= (len - 1); i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');

}
