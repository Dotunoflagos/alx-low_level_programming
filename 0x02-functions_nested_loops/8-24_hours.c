#include "main"
/*
* jack_bauer - Short description, single lin
* discription:ssdfs
*/
void jack_bauer(void)
{
	int c = 0;

	for (c = 0; c < 24; c++)
	{
		int d = 0;

		_putchar("0%d:", c);
		for (d = 0; d < 60; d++)
		{
			_putchar("0%d", c);
		}
	}
}
