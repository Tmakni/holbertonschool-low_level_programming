#include <unistd.h>
#include <stdio.h>
/**
 * FizzBuzz - check the code
 * @i: compteur
 * return: rien
 */
void FizzBuzz(int i)
{
	i = 1;

	while (i <= 100)
	{

	if (i % 15 == 0)
	{
		printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i);
	}
	if (i < 100)
	{
		printf(" ");
	}
	i++;
	}
	printf("\n");
}
int main()
{
	FizzBuzz(100);
	return (0);
}
