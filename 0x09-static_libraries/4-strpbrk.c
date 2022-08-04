#include "main.h"

/**
 * _strpbrk - search for charactyers
 * @s: string
 * @accept: to be searched for
 * Return: number
 */

char *_strpbrk(char *s, char *accept)
{
	int slen = 0, acclen = 0, i = 0, j = 0;

	while (s[slen] != '\0')
		slen++;

	while (accept[acclen] != '\0')
		acclen++;

	for (i = 0; i <= slen - 1; i++)
	{
		for (j = 0; j <= acclen - 1; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (0);
}
