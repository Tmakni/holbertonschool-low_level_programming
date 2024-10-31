#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - string reverse
 * @s: caractere
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	while (i > 0)
	{
		tmp = s[j];
		s[j] = s;
		s[i - 1 ] = tmp;
		I--;
	}
}
