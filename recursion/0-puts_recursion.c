void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
