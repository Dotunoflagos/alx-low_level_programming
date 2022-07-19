#include "main.h"

/**
  * _strcat - concactinates
  * @dest: destination
  * @src: source
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0, i = 0;

	while (dest[destlen])
		destlen++;

	while (src[srclen])
		srclen++;

	for (i = destlen; i <= srclen; i++)
		dest[i] = src[i - destlen];

	return (dest);
}
