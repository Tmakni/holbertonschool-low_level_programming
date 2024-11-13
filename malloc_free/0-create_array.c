#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * *create_array: malloc
 * @size: taille
 * @c: tableu compteur
 * Desc: malloc
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	
	if (size == 0)
	{
		return (0);
	}
	str = malloc (sizeof (char) * size);
	
	if (str == 0)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
			str[i] = c;
			i++;
	}
	return (str);
}
