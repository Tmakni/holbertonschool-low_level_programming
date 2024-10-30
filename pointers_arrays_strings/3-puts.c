#include <stdio.h>
#include <unistd.h>
/**
 * _puts - imprime caract√res
 * @str: int type pointer
 * Return: rien
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
