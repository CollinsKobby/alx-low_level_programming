#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
