#include "main.h"

/**
  * _strcat - concactinates
  * @dest: destination
  * @src: source
  * @n: length to be copied
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, srclen = 0, i = 0;

	while (dest[destlen])
		destlen++;

	while (src[srclen])
		srclen++;

	if (n > srclen)
		n = srclen;

	for (i = destlen; i <= (destlen + n) - 1; i++)
		dest[i] = src[i - destlen];

	return (dest);
}
