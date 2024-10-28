#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_numbers - The numbers speak for themselves
 * Description: print 0 a 9
 * Return: rien
 */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i >= '0' && i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
