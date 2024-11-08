#include <stdio.h>
/**
 * main - print
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	while (i = 0 && i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
