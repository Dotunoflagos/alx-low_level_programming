#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char wrd[] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(wrd[i]);
		i++;
	}
	return (0);
}
