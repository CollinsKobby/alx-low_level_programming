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

	while ((n > 0) && (n < 10))
	{
		_putchar(n);
		n++
	}
	_putchar('\n');

	return (0);
}
