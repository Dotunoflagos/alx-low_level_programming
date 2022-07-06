#include "main.h"
/**
* print_last_digit - Short description, single line
* @c: Parameter c
* Return: Returns 1 or 0 or -1
*/
int print_last_digit(int c)
{
	c %= 10;
	if (c < 0)
		c *= -1;
	_putchar('0' + c);
	return (c);
}
