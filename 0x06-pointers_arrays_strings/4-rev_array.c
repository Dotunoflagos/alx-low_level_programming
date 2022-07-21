#include "main.h"

/**
  * reverse_array - reverse array
  * @a: array
  * @n: number
  */

void reverse_array(int *a, int n)
{
	int i;
	
	for (i = 0 ; i < n; i++)
	{
		int tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		
	}
}
