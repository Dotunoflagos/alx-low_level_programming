#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * create_array - creats an array
 * @size: size of array
 * @c: innitialised with
 * Return: NULL or a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) *  size);
	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
