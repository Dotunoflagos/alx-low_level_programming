#include "main.h"
/**
 * print_diagonal - prints the alphabet in lowercase.
 * @size: length of line
 */
void print_triangle(int size)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (d = n - 1; d <= 0; d--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
