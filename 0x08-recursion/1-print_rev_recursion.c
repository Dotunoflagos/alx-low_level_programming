#include "main.h"

/**
 * _puts_recursion - prints strings
 * @s: to be printed
 * Return: breaks loop
 */

void _puts_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i++;
		_print_rev_recursion(s + 1);
	}
	if (i - 1 != 0)
		_putchar(s[i])
	else
		_putchar('\0');
}
