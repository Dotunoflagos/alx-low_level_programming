#include "main.h"
/**
 * print_diagonal - prints the alphabet in lowercase.
 * @n: length of line
 */
void print_diagonal(int n)
{
	int c;

	if (n == 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
