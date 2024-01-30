#include <stdio.h>
#include "main.h"

/**
 * swap_int - used to swap input
 *
 * @a: pointer a
 * @b: poinetr b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

