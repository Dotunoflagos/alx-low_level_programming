#include "main.h"

/**
 * cap_string - capitalise wwords
 * @ch: input character
 */

char *cap_string(char *ch)
{
	int chlen = 0, i = 0;

	while (ch[chlen] != '\0')
		chlen++;

	for ( ; i <= chlen; i++)
	{
		if (i == 0 && (ch[i] >= 65 && ch[i] <= 90))
		{
			ch[i] -= 32;
		}
		else if (ch[i] >= 97 && ch[i] <= 122)
		{
			if (ch[i - 1] == 10 || ch[i] == 32 || ch[i] == 46)
				ch[i] -= 32;
		}
	}
	return (ch);
}
