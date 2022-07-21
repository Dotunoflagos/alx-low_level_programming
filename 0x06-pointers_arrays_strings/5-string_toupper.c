#include "main.h"

/**
  * string_toupper - changes strings to uppercase
  * @s: string to be changed
  * Return: uppercase
  */

char *string_toupper(char *s)
{
	int i = 0, len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		if ((s[i] >= 65 && s[i] <= 90) || s[i] == 32 || s[i] == 46 || s[i] == 10)
			i++;
		tmp = s[i];

		s[i] = tmp - 32;
		i++;
	}
	return (s);
}
