#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates string
 *
 * @dest: first member
 * @src: second member
 * @n: size
 *
 * Return: strncat()
 */

char *_strncat(char *dest, char *src, int n)
{
	char *strncat(char *dest, const char *src, size_t sz);

	return (strncat(dest, src, n));
}

