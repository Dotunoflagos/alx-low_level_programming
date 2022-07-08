#include "main.h"
/**
 * print_square - prints the alphabet in lowercase.
 * @size: length of line
 */
void print_square(int size)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (d = 1; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
