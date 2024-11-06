/**
 * _menset - file
 * @s: sting
 * @b: acrementation
 * @n: decompteur
 * Description: fill memory poiteur string
 * Return: 1
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
