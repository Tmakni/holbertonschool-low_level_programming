#include "main.h"
#include <unistd.h>
/**
 * print_diagonal - check the code
 * @n: compteur
 * return: rien
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
	write(1, "\n", 1);
	}
		while (i < n)
		{
			int j = 0;

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
