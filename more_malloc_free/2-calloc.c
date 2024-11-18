#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory
 * @nmemb: number
 * @size: size
 * Return: 1
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	k = arr;
	for (i = 0; i < nmemb * size; i++)
		k[i] = 0;
	return (arr);
}
