#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */

int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	write(1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n", 27);
}
