/**
 * _strpbrk - file memory
 * @s: string
 * @accept: string
 * Desc: print memory s
 * Return: 1
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int compt = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + compt);
			}
			j++;
		}
		compt++;
		i++;
	}
	return (0);
}
