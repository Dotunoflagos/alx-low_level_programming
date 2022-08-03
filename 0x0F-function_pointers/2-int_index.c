#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @cmp: pointer to the function that compares
 * @size: size of the array
 * @array: array of elements
 *
 * Return: return the in of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int in;

	if (array == NULL || cmp == NULL || size <= 0)
        return (-1);
	for (in = 0 ; in < size ; in++)
	{
		if ((*cmp)(array[in]) != 0)
			return (in);
	}
	return (-1);
}
