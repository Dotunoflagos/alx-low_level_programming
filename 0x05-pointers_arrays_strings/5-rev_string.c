#include "main.h"
/**
* rev_string - prints the alphabet in lowercase, followed by a new line.
* @s: super story
* Return: count
*/

void rev_string(char *s)
{
	int i;
	int len = 0;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		c = s[i];
		s[i] = s[len-i-1];
		s[len - i - 1] = c;
	}

}
