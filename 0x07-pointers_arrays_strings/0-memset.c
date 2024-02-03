#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory
 *
 * @s: first member
 * @b: second member
 * @n: third member
 *
 * Return: memset()
 */

char *_memset(char *s, char b, unsigned int n)
{
	void *memset(void s[.n], int c, size_t n);

	return (memset(s, b, n));
}

