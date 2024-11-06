/**
 * _strspn - file memory
 * @s: string
 * @accept: compteur
 * Desc: print memory s
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	char *f = s;
	char *n = f;
	while (*s != '\0')
	{
		n++;
	}
	while (*f != '\0')
	{
		n++;
	}
	return (0);
}
