#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strdup - creats an array
 * @str: size of array
 * Return: NULL or a pointer
 */

char *_strdup(char *str)
{
	char *arr;
	int i = 0; size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	arr = malloc(sizeof(char) *  size);
	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
