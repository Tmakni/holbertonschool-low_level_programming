/**
 * _memcpy - file memory
 * @dest: sting
 * @src: acrementation
 * @n: decompteur
 * Desc: print memory s
 * Return: pointeur
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i = dest;

	while (n > 0)
	{
		*dest = *src;
		i++;
		n--;
	}
	return (i);
}
