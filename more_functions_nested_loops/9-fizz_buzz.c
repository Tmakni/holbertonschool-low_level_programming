#include <unistd.h>
#include <stdio.h>
#include "main.h"

void FizzBuzz(int i)
{
	i = 1;
	while (i <= 100)
	{
		write(1, &i, 1);
	}
	write(1, "\n", 1);
}
