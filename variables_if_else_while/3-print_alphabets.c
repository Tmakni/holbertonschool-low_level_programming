#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{

	write(1, "abcdefghijklmnopqrstuvwxyz", 26);

	write(1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n", 27);

	return (0);

}
