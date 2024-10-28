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

	i = 0;
	while (i >= 0 && i <= 9)
	{
		putchar(i);
		i++;
	}
	write(1, "\n", 1);
}
