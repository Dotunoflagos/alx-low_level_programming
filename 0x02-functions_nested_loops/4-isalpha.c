#include "main.h"
/**
* _isalpha - Short description, single line
* @c: Parameter c
* Return: Returns 1 or 0
*/
int _isalpha(int c)
{
	if (c >= a && c <= z)
		return (1);
	else if (c >= A && c <= Z)
		return (1);
	else
		return (0);
}
