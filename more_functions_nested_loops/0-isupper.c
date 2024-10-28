#include "main.h"
/**
 * _isupper - code
 * @c: A a Z
 * Return: c.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
