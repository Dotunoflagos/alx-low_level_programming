#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to the memory aera
 * @b: bytes of memory
 * @n: count byte
 * Return: the memory add of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
