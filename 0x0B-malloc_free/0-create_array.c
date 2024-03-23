#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it
 * @size: size of malloc
 * @c: Character
 *
 * Return: Characters
 */

char *create_array(unsigned int size, char c)
{
	char *aptr;
	int i;

	aptr = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		aptr = (char *)malloc(size * sizeof(char));
		if (aptr != NULL)
		{
			for (i = 0; i < (int)size; ++i)
			{
				aptr[i] = c;
			}
		}
	}

	return (aptr);
}
