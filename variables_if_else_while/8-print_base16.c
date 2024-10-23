#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */

int main(void)

{

	write(1, "0123456789abcdef\n", 27);
	return (0);

}
