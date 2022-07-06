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

	while (i < 8)
	{
		_putchar(wrd[i]);
		i++;
	}
	return (0);
}
