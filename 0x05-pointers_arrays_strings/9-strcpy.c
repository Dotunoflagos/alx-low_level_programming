#include "main.h"
#include <stdio.h>
/**
* _strcpy - prints the alphabet in lowercase, followed by a new line.
* @dest: super story
* @src: count
* return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;
	
	while (src[len])
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	}
	return(dest);
}
