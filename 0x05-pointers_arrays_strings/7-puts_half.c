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
	for (i = (len - 1) / 2; i <= len - 1; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');

}
