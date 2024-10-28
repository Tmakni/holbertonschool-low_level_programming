#include <stdio.h>
/**
 * print_numbers - The numbers speak for themselves
 * Description: print 0 a 0
 * Return: rien
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
