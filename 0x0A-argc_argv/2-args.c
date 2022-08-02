#include "main.h"
#include <stdio.h>
/**
 * mazn - prznts the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 *
 *
 * Return: Always to 0
 */
int main(int argc, char *argv[])
{
	int z;

	for (z = 0 ; z < argc ; z++)
	{
		printf("%s\n", argv[z]);
	}
	return (0);
}
