#include "main.h"
/**
* puts2 - prints the alphabet in lowercase, followed by a new line.
* @str: super story
* Return: count
*/

void puts_half(char *str)
{
	int i;
	int len = 0;
	char c;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len / 2; i < len; i++)
	{
		c = str[i - 1];
		_putchar(c);
	}
	_putchar('\n');

}
