#include "main.h"

/**
 * _puts_recusion - prints strings
 * @s: to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
