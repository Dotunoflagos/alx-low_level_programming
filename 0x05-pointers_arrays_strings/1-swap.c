#include "main.h"
/**
* swap_int - prints the alphabet in lowercase, followed by a new line.
* @a: super story
* @b: swap
* Return: 1 0r 0
*/

void swap_int(int *a, int *b)
{ 
	int c,d;
	
	c = *b;
	d = *a;

	*a = c;
	*b = d;
}
