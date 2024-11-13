#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - malloc
 * @s1: string
 * @s2: string
 *
 * Return: 1
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < len2)
	{
		p[i + j] = s2[j];
		j++;
	}

	p[i + j] = '\0';

	return (p);
}
