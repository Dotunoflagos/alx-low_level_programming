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

	if (size == 0)
		return ('\0');

	arr = malloc(1 *  size);
	if (*arr == '\0')
		return ('\0');

	while (size > 0)
	{
		arr[size] = c;
		size--;
	}
	return (arr);
}
