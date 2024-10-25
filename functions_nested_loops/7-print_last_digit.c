#include "main.h"

/**
 * print_last_digit - check the code
 * @n : input
 *
 * Return: Always 0.
 */
int print_last_digit(int n)

{

	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
