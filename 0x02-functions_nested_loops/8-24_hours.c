#include "main.h"

/**
* jack_bauer - Prints 24hr time.
*/
void jack_bauer(void)
{
	int c, d, e, f;

	for (c = 48; c < 51;  c++)
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
					if (c == 50 && d == 51 && e == 53 && f == 57)
						break;
				}
				if (c == 50 && d == 51 && e == 53)
					break;
			}
			if (c == 50 && d == 51)
				break;
		}
		if (c == 50)
			break;
	}
}
