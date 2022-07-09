#include "main.h"
/**
 * print_diagonal - prints the alphabet in lowercase.
 * @size: length of line
 */
void print_triangle(int size)
{
	int c, d, n, f;

	n = size;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d <= n - c; d++)
			{
				_putchar(' ');
			}
			for (f = n - c; f <= n - 1; f++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
