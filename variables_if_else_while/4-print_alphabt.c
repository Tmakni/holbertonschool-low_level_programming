#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */

int main(void)

{

	write(1, "abcdfghijklmnoprstuvwxyz\n", 25);
	return (0);

}