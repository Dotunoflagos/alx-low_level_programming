#include "main.h"
/**
* _puts - prints the alphabet in lowercase, followed by a new line.
* @str: super story
* Return: count
*/

void _puts(char *str)
{
	int *c = str;
	int b;

	while (*c != '\0')
	{
		b = *(str + c);
		_putchar(b);
		c++;
	}
}
