#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints times table.
* @n: to be addedvoid
*/
void print_to_98(int n)
{
	int c;

	if (n > 98)
	{
		for (c = n; c != 98; c--)
		{
			printf("%d", c);
			if (c < 98)
				printf(", ");
			else
				putchar('\n');
		}
	}
	else
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d", c);
			if (c < 98)
				printf(", ");
			else
				putchar('\n');
		}
	}
}
