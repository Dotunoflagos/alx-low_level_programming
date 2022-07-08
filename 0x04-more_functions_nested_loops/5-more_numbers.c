#include "main.h"
/**
 * print - prints the alphabet in lowercase.
 * @n: to be printed
 */
void print(int n)
{
	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * print_most_numbers - prints the alphabet in lowercase.
 */
void print_more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 10; c++)
	{
		for (d = 0; d <= 14; d++)
			print(d);

		_putchar('\n');
	}
}
