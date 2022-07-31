/**
 * malloc_checked - Allocates memory
 * @b: espace to be allocated
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b) * b);
	if (p == NULL)
		return (98);
	return (p);
}
