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
	int s;

	for (s = 0 ; s < argc ; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
