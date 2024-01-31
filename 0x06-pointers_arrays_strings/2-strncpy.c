#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies strings
 *
 * @dest: first member
 * @src: second member
 * @n: third member
 *
 * Return: strncpy()
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *strncpy(char *dest, const char *src, size_t n);

	return (strncpy(dest, src, n));
}

