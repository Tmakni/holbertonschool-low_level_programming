#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: 1
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
	{
		return;
	}
	f(name);
}
