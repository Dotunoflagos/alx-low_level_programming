#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low;

	for (low = 97 ; low <= 122 ; low++)
		putchar(low);

	putchar(10);
	return (0);
}
