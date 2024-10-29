#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_diagonal - check the code
 * @n: compteur
 * return: rien
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	if (n < 0)
	{
	write(1, "\n", 1);
	}
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				write(1, " ", 1);
				j++;
			}
			write(1, "\\", 1);
			write(1, "\n", 1);
			i++;
		}
}

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
