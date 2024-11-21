#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_numbers - Imprime des nombres suivis d'une nouvelle ligne.
 * @separator: Chaîne à afficher entre les nombres.
 * @n: Nombre d'entiers passés à la fonction.
 *
 * Description: Si le séparateur est NULL, il n'est pas affiché.
 * Une nouvelle ligne est ajoutée à la fin de l'impression.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	args;
	unsigned int i;
	int num;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);
			if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("/n");
	va_end(args);
}
