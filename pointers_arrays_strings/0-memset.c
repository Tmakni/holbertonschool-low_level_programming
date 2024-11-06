/**
 * _menset - file memory
 * @s: sting
 * @b: acrementation
 * @n: decompteur
 * Desc: print memory s
 * Return: pointeur
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
