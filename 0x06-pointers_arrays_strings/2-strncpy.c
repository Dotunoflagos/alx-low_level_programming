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

	while (src[len])
		len++;

	if (src[len] != '\0')
	{
		for (i = 0; i <= n; i++)
			dest[i] = src[i];
	}
	i++;
	if (len < n)
	{
		for ( ; i <= n + len; i++)
			dest[i] = '\0';
	}
	return (dest);
}
