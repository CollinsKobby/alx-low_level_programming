#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - recursive function of puts
 *
 * @s: charcater pointer
 * Return: puts(s)
 */

void _puts_recursion(char *s)
{
	int puts(const char *s);

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
