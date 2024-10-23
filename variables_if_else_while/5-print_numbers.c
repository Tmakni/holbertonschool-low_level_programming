#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */

int main(void)

{

	write(1, "123456789", 9);
	write(1, "10\n", 3);
	return (0);

}
