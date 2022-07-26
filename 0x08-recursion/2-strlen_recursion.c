#include "main.h"

/**
 * _strlen_recursion - prints strings
 * @s: to be printed
 * Return: breaks loop
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
