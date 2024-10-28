#include "main.h"
#include <unistd.h>
/**
 * more_numbers - Numbers constitute the only universal language
 * Description: print 0 a 9 * 10
 * Return: rien
 */
void more_numbers(void)
{
	int i = '0';

	while (i >= 0 && i <= '9')
	{
		write(1, "01234567891011121314\n", 21);
		i++;
	}
}
