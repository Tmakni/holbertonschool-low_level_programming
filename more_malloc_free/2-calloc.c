#include <stdio.h>
#include <stdlib.h>
#include "main.h²"
/**
 * _calloc - allocates memory
 * @nmemb: number
 * @size: size
 * Return: 1
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
