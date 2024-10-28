#include "main.h"
#include <unistd.h>
/**
 * print_numbers - check the code
 * @i : input
 * Return: Always 0.
 */
void print_numbers(void)
{
int i;

i = 0;
	while (i >= '0' && i <= '9')
	{
		write(1, &i, 1);
		write(1, "\n", 1);
		i++;
	}
}
