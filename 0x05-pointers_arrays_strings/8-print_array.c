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
	
	while (str[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n != len - 1)
			printf(", ");
	}
	_putchar('\n');
}
