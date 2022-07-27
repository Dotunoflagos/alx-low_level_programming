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
	int i;

	if (size == 0)
		return ('\0');

	arr = malloc(sizeof(char) *  size);
	if (arr == '\0')
		return ('\0');

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
