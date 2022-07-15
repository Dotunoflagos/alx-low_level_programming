#include "main.h"
/**
* print_rev - prints the alphabet in lowercase, followed by a new line.
* @s: super story
* Return: count
*/

void print_rev(char *s)
{
	char *c = str;

	while (*c != '\0')
	{
		c++;
	}

	while (*c == '\n')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
