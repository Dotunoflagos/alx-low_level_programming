#include "main.h"

/**
  * string_toupper - changes strings to uppercase
  * @s: string to be changed
  */

char *string_toupper(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s[i] = s[i] - 32;
		i++;
		s++;
	}
}
