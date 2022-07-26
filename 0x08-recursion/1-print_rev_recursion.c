#include "main.h"

/**
 * _puts_rev_recursion - prints strings
 * @s: to be printed
 * Return: breaks loop
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
