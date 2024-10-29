#include "main.h"
#include <unistd.h>
/**
 * print_square - check the code
 * @size: compteur
 * return: rien
 */
void print_square(int size)
{
	int i = 0;
	if (size <= 0)
	{
		write(1, "\n", 1);
	}
	while (i < size)
	{
		int j = 0;
		while(j < size)
		{
			write(1, "#", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
