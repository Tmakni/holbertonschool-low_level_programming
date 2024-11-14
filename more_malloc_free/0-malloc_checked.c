#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - function
* @b: variable
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
