/**
 * _strchr - file memory
 * @s: sting
 * @c: compteur
 * Desc: print memory s
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
