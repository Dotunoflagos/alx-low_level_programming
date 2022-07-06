#include "main.h"
/*
* jack_bauer - Short description, single lin
* discription:ssdfs
*/
void jack_bauer(void)
{
	int c = 0;

	for (c = 48; c < 52;  c++)
	{
		int d = 0;

		for (d = 48; d < 57; d++)
		{
			_putchar('0' + c);
			_putchar(':');
			_putchar(d);
			_putchar('\n');
		}
	}
}
