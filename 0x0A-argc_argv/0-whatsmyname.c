#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * @agrc: counts number of command line arguments
 * @agrv: array of the command line argument
 *
 * Return: always 0
 */

int main(int agrc, char *agrv[])
{
	(void) agrc;
	printf("%s\n", agrv[0]);

	return (0);
}
