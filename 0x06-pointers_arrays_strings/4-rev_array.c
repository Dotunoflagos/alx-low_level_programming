#include "main.h"

/**
  * reverse_array - reverse array
  * @a: array
  * @n: number
  */

void reverse_array(int *a, int n)
{
	int b[n], i = 0;

	while (*a != '\0')
	{
		b[i] = *a;
		i++;
		a++;
	}
	for (i = n ; i <= 0; i--)
	{
		a[i] = b[n - i];
	}
}
