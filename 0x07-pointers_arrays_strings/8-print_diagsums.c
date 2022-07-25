#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - disgonal sum
 * @a: array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; i <= size; i++)
	{
		j = j + a[i][i];
		k = k + a[i][size - i - 1];
	}
	printf("%d", j);
	printf("%d", k);
}
