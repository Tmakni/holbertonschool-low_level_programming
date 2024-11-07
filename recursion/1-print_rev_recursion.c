#include <unistd.h>
/**
 * _puts_recursion - print recursion
 *@s: string
 *Desc: recursion print
 * Return: 1
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	write(1, &s[i], 1);
	_print_rev_recursion(s - 1);
}
