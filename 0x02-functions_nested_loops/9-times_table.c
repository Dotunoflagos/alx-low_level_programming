#include "main.h"

/**
* print - prints single charecter with _printchar.
* @n: number to be printed.
*/
void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}

/**
* times_table - Prints times table.
*/
void times_table(void)
{
	int c, d, e;

	for (c = 0; c <= 9;  c++)
	{
		for (d = 0; d <= 9; d++)
		{
			e = c * d;

			if (d != 0)
			{
				if (e > 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			print(e);
			if (d == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
