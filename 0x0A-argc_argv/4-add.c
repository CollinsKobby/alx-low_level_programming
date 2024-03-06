#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: count arguments
 * @argv: array of argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] > 1)
		{
			sum += atoi(argv[i]);
		}
		else if (argc == 1)
		{
			printf("0\n");
		}
	}
	printf("%d\n", sum);

	return (0);
}
