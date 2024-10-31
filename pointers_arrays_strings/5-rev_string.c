#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - string reverse
 * @s: caractere
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i--;
	}
	while (i > 0)
	{
		i++;
	}
}
