#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counts arguments
 * @argv: array of argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int multiple = 1;

	if (argc == 3)
	{
		multiple = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
