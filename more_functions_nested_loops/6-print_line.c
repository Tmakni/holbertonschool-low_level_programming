#include "main.h"
#include <stdio.h>
#include <unistd.h>	
/**
 * print_line - The shortest distance between two points is a straight line
 * @n: input
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			write(1, "&_", 1);
	write(1, "\n", 1);
}
