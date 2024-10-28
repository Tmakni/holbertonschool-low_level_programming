#include "main.h"
/**
 * print_line - The shortest distance between two points is a straight line
 * Description: print _
 * @n: input
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			putchar('_');
	putchar('\n');
}
