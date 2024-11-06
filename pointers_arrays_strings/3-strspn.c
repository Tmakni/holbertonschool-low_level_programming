/**
 * _strspn - file memory
 * @s: string
 * @accept: compteur
 * Desc: print memory s
 * Return: 1
 */
unsigned int _strspn(char *s, char *accept)
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
				compt++;
			}
			break;
			j++;
		}
		i++;
	}
	return (compt);
}
