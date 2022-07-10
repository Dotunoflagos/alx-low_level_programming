#include "main.h"
/**
* print_to_98 - Prints times table.
* @n: to be addedvoid
*/
void print_to_98(int n)
{
	int c;

	for (c = n; c <= 98; c++)
	{
		printf("%d", c);
		if (c < 98)
			printf(", ");
	}
}
