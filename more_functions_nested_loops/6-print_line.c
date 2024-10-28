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
	int i = 0;

	while (i < n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
