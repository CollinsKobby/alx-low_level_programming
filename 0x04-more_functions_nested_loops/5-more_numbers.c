#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers
 *
 * Return: 0
 */


void more_numbers(void)
{
	int z = 0;
	int n = 01234567891011121314;

	while (z < 11)
	{
		_putchar(n);
		z++;
	}
	_putchar ('\n');
}
