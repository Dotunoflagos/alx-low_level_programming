#include "main.h"
/**
* print_most_numbers - prints the alphabet in lowercase, followed by a new line.
*/

void print_most_numbers(void);
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 4 || c == 2)
			continue;
		_putchar(c + '0');
	}
	_putchar('\n');
}
