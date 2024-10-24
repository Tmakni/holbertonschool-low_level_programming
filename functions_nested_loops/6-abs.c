#include "main.h"
/**
 * _abs - Entry point.
 * @i: input
 * Return: The absolute value of the input integer.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
