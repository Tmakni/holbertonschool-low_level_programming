#include <stdio.h>
#include <unistd.h>
/**
 * _strlen - return the length of the string
 * @s: int type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
