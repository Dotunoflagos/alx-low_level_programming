#include "main.h"
/*
* jack_bauer - Short description, single lin
* discription:ssdfs
*/
void jack_bauer(void)
{
	int c, d, e, f;

	for (c = 48; c < 51;  c++)
	{
		if (c == 49)
			break;
		else
		{
		for (d = 48; d < 58; d++)
		{
			for (e = 48; e < 54; e++)
			{
				for (f = 48; f < 58; f++)
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
}
