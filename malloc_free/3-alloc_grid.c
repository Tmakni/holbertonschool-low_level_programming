#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **str;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(int *) * height);
	if (str == NULL)
	{
		return (0);
	}
	while (i < height)
	{
		str[i] = malloc(sizeof(int) * width);
		if (str[i] == NULL)
		{
			return (0);
		}
		j = 0;
		while (j < width)
		{
			str[i][j] = 0;
			j++;
		}
		i++;
	}
	return (str);
}
