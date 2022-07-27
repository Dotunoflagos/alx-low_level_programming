#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * count - count input
 * @s: string to be counted
 * Return: count or string
 */

int count(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		s = "";
		return (i);
	}
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return (i);
	}
}

/**
 * str_concat - creats an array
 * @s1: string1
 * @s2: string2
 * Return: NULL or a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int s1len = 0, s2len = 0, i = 0, j = 0;

	s1len = count(s1);
	s2len = count(s2);
	arr = malloc(sizeof(char) *  (s1len + s2len + 1));
	if (arr == NULL)
		return (NULL);

	while (i < s1len)
	{
		arr[i] = s1[i];
		i++;
	}

	while (i < s1len + s2len)
	{
		arr[i] = s2[j];
		i++;
		j++;
	}

	return (arr);
}
