#include "main.h"
/**
 * print_line - prints the alphabet in lowercase.
 * @n: length of line
 */
void print_line(int n)
{
	int c;

	if (n == 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
