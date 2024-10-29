#include "main.h"
#include <unistd.h>
/**
 * print_diagonal - check the code
 * @n: compteur
 * return: rien
 */
void print_square(int size)
{
	int i = 0;
	if (size <= 0)
	{
		write(1, "\n", 1);
	}
	int j;
	while (i < size)
	{
		j = 0;
		while(j < size)
		{
			write(1, "#", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
