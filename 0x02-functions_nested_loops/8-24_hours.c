#include "main.h"
/*
* jack_bauer - Short description, single lin
* discription:ssdfs
*/
void jack_bauer(void)
{
	int c = 0;

	for (c = 48; c < 50;  c++)
	{
		_putchar(c);
		int d = 0;

		for (d = 48; d < 57; d++)
		{
			_putchar(d);
			_putchar(':');
			_putchar('\n');
		}
	}
}
