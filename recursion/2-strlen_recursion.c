#include <unistd.h>
/**
 * _strlen_recursion - print recursion
 *@s: string
 *Desc: recursion print
 * Return: 1
 */
int _strlen_recursion(char *s)
{
	if (s[i] == '\0')
	{
		return;
	}
	write(1, &s[i], 1);
	_strlen_recursion(s[i] + 1);
}
