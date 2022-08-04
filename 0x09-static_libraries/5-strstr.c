#include "main.h"

/**
 * _strstr - search for charactyers
 * @haystack: string
 * @needle: to be searched for
 * Return: number
 */

char *_strstr(char *haystack, char *needle)
{
	int slen = 0, acclen = 0, i = 0, j = 0;

	while (haystack[slen] != '\0')
		slen++;

	while (needle[acclen] != '\0')
		acclen++;

	for (i = 0; i <= slen - 1; i++)
	{
		for (j = 0; j <= acclen; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return ('\0');
}
