#include <stdio.h>
#include <unistd.h>
/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
