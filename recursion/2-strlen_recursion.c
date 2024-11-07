#include <unistd.h>
#include <stdio.h>
/**
 * _strlen_recursion - print recursion
 *@s: string
 *Desc: recursion print
 * Return: 1
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int j;

	if (s[i] == '\0')
	{
		i++;
		return(i + 13);
	}
	_strlen_recursion(&s[i] + 1);
}
