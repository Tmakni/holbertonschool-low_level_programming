/**
 * *_menset - 
 * @s: sting
 * @b: acrementation
 * @n: decompteur
 *
 * Return: 1
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while(n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);

}
