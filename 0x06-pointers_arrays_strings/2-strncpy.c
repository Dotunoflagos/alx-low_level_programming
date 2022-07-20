#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: destination
  * @src: source
  * @n: number
  * Return:dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	if (src[0] != '\0')
	{
		while (src[len])
			len++;
		for ( ; i < n; i++)
			dest[i] = src[i];
	}
	if (len < n)
	{
		for ( ; i <= n + len - 1; i++)
			dest[i] = '\0';
	}
	return (dest);
}
