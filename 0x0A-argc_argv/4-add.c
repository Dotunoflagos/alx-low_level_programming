#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, m, plus;

	plus = 0;

	for (i = 1; i < argc ; i++)
	{
		for (m = 0; argv[i][m] != '\0' ; m++)
		{
			if (argv[i][m] < 47 || argv[i][m] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		plus = plus + atoi(argv[i]);
	}
	printf("%d\n", plus);
	return (0);
}
