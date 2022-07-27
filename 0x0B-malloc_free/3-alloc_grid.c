#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * create_array - creats an array
 * @size: size of array
 * @c: innitialised with
 * Return: NULL or a pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) *  height);
	if (arr == NULL)
		return (NULL);

	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		while (j < weith)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
