#include "main.h"
/*
* jack_bauer - Short description, single lin
* discription:ssdfs
*/
void jack_bauer(void)
{
	int c, d, e, f;

	for (c = 48; c < 50;  c++)
	{
		for (d = 48; d < 57; d++)
		{
			for (e = 48; e < 53; e++)
			{
				for (f = 48; f < 57; f++)
				{
				_putchar(c);
				_putchar(d);
				_putchar(':');
				_putchar(e);
				_putchar(f);
				_putchar('\n');
				}
			}
		}
	}
}
