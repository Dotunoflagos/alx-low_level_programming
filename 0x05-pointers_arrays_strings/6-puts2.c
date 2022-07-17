#include "main.h"
/**
* puts2 - prints the alphabet in lowercase, followed by a new line.
* @str: super story
* Return: count
*/

void puts2(char *str)
{
	int i;
	int len = 0;
	char c;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		c = str[i];
		if (i % 2 == 0)
			_putchar(c);
	}
	_putchar('\n');

}
