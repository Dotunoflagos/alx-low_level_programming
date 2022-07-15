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
	char d;

	while (*c != '\0')
	{
		c++;
		d++;
	}

	while (*c != b)
	{
		c--;
		d--;
		s[d] = *c;
	}
	_putchar('\n');
}
