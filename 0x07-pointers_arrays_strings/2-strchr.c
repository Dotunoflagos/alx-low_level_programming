#include "main.h"

/**
 * _strchr - search for character
 * @c: character to be searched for
 * @s: string to be searched
 * Return: pointer to character or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}
