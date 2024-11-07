void _puts_recursion(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
	}
}
