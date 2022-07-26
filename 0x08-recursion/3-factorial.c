#include "main.h"

/**
 * factorial - prints strings
 * @n: to be printed
 * Return: breaks loop
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else (n < 1)
		return (1);

	return (n * factorial(n - 1));
}
