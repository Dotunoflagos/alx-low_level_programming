#include "main.h"
/**
* _puts - prints the alphabet in lowercase, followed by a new line.
* @str: super story
* Return: count
*/

void _puts(char *str)
{
	char *c = str;

	while (*c != '\0')
	{
		_putchar(*c);
		_putchar('\n');
		c++;
	}
}i
