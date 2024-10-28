#include "main.h"
#include <unistd.h>
/**
 * print_line - The shortest distance between two points is a straight line
 * @n: input
 * Return: rien
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		write(1, "\n", 1);
	}
	else
	{
	while (i < n)
	{
		write(1, "_", 1);
		i++;
	}
	write(1, "\n", 1);
	}
}
