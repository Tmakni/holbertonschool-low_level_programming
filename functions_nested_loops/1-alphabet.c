#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return: 0
 */
void print_alphabet(void);

void print_alphabet(void)

{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
