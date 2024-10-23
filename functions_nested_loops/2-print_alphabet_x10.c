#include <unistd.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while(i != 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		i++;
	}
}
