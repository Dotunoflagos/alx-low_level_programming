#include "main.h"
/*
* jack_bauer - Short description, single lin
* discription:ssdfs
*/
void jack_bauer(void)
{
	int c, d, e;

	for (c = 48; c < 50;  c++)
	{
		for (d = 48; d < 57; d++)
		{
			for (e = 48; e < 57; e++)
			{
			_putchar(c);
			_putchar(d);
			_putchar(':');
			_putchar(e);
			_putchar('\n');
			}
		}
	}
}
