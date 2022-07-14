#include "main.h"
/**
* _strlen - prints the alphabet in lowercase, followed by a new line.
* @s: super story
*/

int _strlen(char *s)
{
	char *c = s;
	int d = 0;

	while (*c != '\0')
	{
		c++;
		d++;
	}
	return (d);
}
