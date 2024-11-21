#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Adds all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: 1
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
