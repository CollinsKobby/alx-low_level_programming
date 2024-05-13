#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int z = 0;

	while ((z >= 0) && (z < 10))
	{
		if (z != 2 && z != 4)
		{
			_putchar(z + '0');
		}
		z++;
	}
	_putchar('\n');
}
