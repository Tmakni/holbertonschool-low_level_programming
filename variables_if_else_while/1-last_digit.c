#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int	main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	printf("%d", n);
	if (n > 5)
	{
	printf("%d and is greater than 5 \n", n);
	}
	if (n == 0)
	{
	printf("%d and is 0", n);
	}
	if (n < 6 && n != 0)
	{
	printf("%d and is less than 6 and not 0 \n", n);
	}
	return (0);
}