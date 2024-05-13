#include <stdio.h>
/**
 * _isdigit - checks for digits
 * @c: number
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
