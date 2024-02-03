#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr - returns a pointer
 *
 * @s: first member
 * @c: second member
 *
 * Return: strchr()
 */

char *_strchr(char *s, char c)
{
	char *strchr(const char *s, int c);

	return (strchr(s, c));
}
