#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - malloc
 * @str: string
 * Desc: malloc
 * Return: 1
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *dup_str;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < i)
	{
		dup_str[j] = str[j];
		j++;
	}
	dup_str[j] = '\0';
	return (dup_str);
}
