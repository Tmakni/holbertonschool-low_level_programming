#include "main.h"
#include <stdio.h>
/**
 * swap_int - Set pointer 98, 42
 * @a: int type pointer
 * @b: int type pointer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
