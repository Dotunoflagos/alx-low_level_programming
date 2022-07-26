#include "main.h"

/**
 * _puts_recusion - prints strings
 * @s: to be printed
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
}
