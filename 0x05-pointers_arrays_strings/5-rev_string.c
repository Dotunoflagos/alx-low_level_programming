#include "main.h"
/**
* rev_string - prints the alphabet in lowercase, followed by a new line.
* @s: super story
* Return: count
*/

void rev_string(char *s)
{
	char *c = s;
	char b = c[0];
	int m;

	while (*c != '\0')
	{
		c++;
		m++;
	}

	while (*c != b)
	{
		c--;
		m--;
		_putchar(m);
		_putchar(c)
		s[m] = *c;
	}
	_putchar('\n');
}
