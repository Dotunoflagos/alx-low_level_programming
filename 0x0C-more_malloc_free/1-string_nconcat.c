#include "stdlib.h"
#include "main.h"

/**
 * _strlen - find length of string
 * @s: string
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	for(i = 0; s[i] != '\0'; i++)
		;
	return(i);
}

/**
 * string_nconcat - joins strings
 * @s1: string one
 * @s2: string two
 * Returns: pointer or NULL
 */

 char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lengths1, lenghts2, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lengths1 = _strlen(s1);
	lengths2 = _strlen(s2);

	if (n > lengths2)
		n = lengths2;

	p = malloc(sizeof(char) * (n + lengths1 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < lengths1; i++)
		p[i] = s1[j];

	for (j = 0; s2[j] != '\0'; && j != n; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';
	return (p);
}
