#include "main.h"

/**
  * string_toupper - changes strings to uppercase
  * @s: string to be changed
  */

char *string_toupper(char *s)
{
	int i = 0, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		if ((s[i] >= 65 && s[i] <= 90) || tmp == 32)
			i++;
		char tmp = s[i];

		s[i] = tmp - 32;
		i++;
	}
	return (s);
}
