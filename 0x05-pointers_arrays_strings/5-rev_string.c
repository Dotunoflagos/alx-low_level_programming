#include "main.h"
/**
* rev_string - prints the alphabet in lowercase, followed by a new line.
* @s: super story
* Return: count
*/

void rev_string(char *s)
{
	char *c = s;
	int m, n;

	while (*c != '\0')
	{
		c++;
		m++;
	}

	for (n = m; n >= 0; n--)
	{
		s[n] = *(c + n);;
	}
	_putchar('\n');
}
