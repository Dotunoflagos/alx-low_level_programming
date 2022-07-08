#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	char f[] = "Fizz";
	char b[] = "Buzz";

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("%s%s", f, b);
			ptchar(' ');
		}
		else if (c % 3 == 0)
		{
			printf("%s", f);
			putchar(' ');
		}
		else if (c % 5 == 0)
		{
			printf("%s", b);
			putchar(' ');
		}
		else
		{
			printf("%d", c);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
