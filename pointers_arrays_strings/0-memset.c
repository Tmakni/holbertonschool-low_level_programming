/**
 * _menset - file
 * @s: sting
 * @b: acrementation
 * @n: decompteur
 *
 * Return: 1
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > i)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
