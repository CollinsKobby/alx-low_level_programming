#include <stdio.h>

/**
 * _isupper - checks for uppercas letters
 *
 * Return: 0
 */

int _isupper(int c)
{
        if (c >= "A" && c <= "Z")
	{
		return (1);
	}
	return (0);
}
