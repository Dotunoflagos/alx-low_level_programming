#include "main.h"
#include <stdio.h>
/**
* print_array - prints the alphabet in lowercase, followed by a new line.
* @a: super story
* @n: count
*/

void print_array(int *a, int n)
{
	int i, len;
	
	len = 0;
	while (a[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	_putchar('\n');
}
