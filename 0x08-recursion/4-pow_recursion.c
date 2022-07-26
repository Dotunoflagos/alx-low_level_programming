#include "main.h"

/**
 * _pow_recursion - prints strings
 * @x: number
 * @y: power
 * Return: breaks loop
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (n < 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
