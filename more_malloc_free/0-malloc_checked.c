#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* *malloc_checked - function
* @b: unsigned int
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
