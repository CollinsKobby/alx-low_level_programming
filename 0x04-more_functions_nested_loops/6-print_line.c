#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times to print _
 *
 * Return: 0
 */


void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_' * n);
	}
}
