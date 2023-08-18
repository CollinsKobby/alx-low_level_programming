#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	if ((n <= 0) && (n >= 9))
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
