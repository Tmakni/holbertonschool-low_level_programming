#include <unistd.h>
/**
 * _print_rev_recursion - print recursion
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
	_print_rev_recursion(s + 1);
	write(1, &s[i], 1);
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
