#include "stdlib.h"
#include "main.h"
/**
 * malloc_checked - Allocates memory
 * @b: espace to be allocated
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
