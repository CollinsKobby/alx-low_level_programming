#include <stdio.h>

/**
 * _isupper - checks for uppercas letters
 *
 * c - receivees alphabet
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
