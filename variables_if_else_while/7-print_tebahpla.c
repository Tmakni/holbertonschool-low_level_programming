#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */

int     main(void)

{

	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
	return (0);

}
