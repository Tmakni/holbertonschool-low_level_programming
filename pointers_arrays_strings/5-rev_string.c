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
	j = i - 1;
	while (i > j + 1)
	{
		tmp = s[j];
		s[j] = s[i - 1];
		s[i - 1] = tmp;
		j--;
		i--;
	}
}
