#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char wrd[] = "_putchar";
	int i = 0;

	while (i < 7)
	{
		++i;
		_putchar(wrd[i]);
	}
	return (0);
}
