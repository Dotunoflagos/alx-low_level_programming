#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * alloc_grid - creats an array
 * @width: size of array
 * @height: innitialised with
 * Return: NULL or a pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) *  height);
	if (arr == NULL)
		return (NULL);

	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
