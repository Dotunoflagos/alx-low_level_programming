#include "main.h"
/**
* _abs - Short description, single line
* @c: Parameter c
* Return: Returns 1 or 0 or -1
*/
int _abs(int c)
{
	if (c < 0)
		return (c*-);
	else if (c == 0)
		return (0);
	else
		return (c);
}
