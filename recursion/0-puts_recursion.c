#include <unistd.h>
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, &s[i], 1);
	_puts_recursion(s + 1);
}