/**
 * _strchr - file memory
 * @s: sting
 * @c: compteur
 * Desc: print memory s
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		*s = c;
		c++;
	}
	return (0);
}
