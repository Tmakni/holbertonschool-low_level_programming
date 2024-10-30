#include <stdio.h>
#include <unistd.h>
#include "main.c"

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
