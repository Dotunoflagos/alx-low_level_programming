#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: destination
  * @src: source
  * @n: number
  * Return:dest
  */

ichar *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (src[len])
		len++;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	i++;
	if (len < n)
	{
		for ( ; i <= n - len; i++)
			dest[i] = '\0';
	}
	return (dest);
}
