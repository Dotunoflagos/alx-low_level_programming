#include "main.h"
/**
* print_sign - Short description, single line
* @n: Parameter c
* Return: Returns 1 or 0 or -1
*/
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 1)
	{
		_putchar('-')
		return (-1);
	}
	else
	{
		_putchar('0')
		return (0);
	}
}
