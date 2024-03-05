#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - recursive reverse printing of string
 *
 * @s: character pointer
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char strrev(char *s);
	if (*s != '\0')
	{
		_putchar(strrev(s));
		_print_rev_recursion(s + 1);
	}
}
