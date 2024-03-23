#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: string
 *
 * Return: strdup()
 */

char *_strdup(char *str)
{
	char *strptr = NULL;
	int i, n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	strptr = (char *)malloc(n + 1 * sizeof(char));
	if (strptr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			strptr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (strptr);
}
