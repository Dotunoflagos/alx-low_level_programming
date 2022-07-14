#include "main.h"
/**
* _strlen - prints the alphabet in lowercase, followed by a new line.
* @s: super story
*/

int _strlen(char *s)
{
	int *c;

	c = *s;
	while (*c != '\0')
	{
		c++;
	}
	return (c);
}
