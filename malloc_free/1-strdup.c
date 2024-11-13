#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - malloc
 * @str: string
 * Desc: malloc
 * Return: 1
 */
char *_strdup(char *str)
{
	unsigned int i = 0;

	if (str == 0)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	char *dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == 0)
	{
		return (0);
	}

	unsigned int j = 0;

	while (j < i)
	{
		dup_str[j] = str[j];
		j++;
	}
	dup_str[j] = '\0';
	return (dup_str);
}
