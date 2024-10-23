#include <unistd.h>

/**
 * main - Enty point of my code
 *
 * Return: Always 0.
 */
void print_alphabet(void);

void print_alphabet(void)

{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
