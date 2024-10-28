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
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
