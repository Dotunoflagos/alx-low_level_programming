#include "main.h"

/**
 * _memset - copies
 * @s: pointer to the memory aera
 * @b: bytes of memory
 * @n: count byte
 * Return: the memory add of s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
