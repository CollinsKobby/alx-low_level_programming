#include <stdio.h>
#include "main.h"

/**
 * swap_int - used to swap input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

