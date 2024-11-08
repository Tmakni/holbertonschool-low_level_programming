/**
 * factorial - recursio,
 *@n: var
 *Desc: factorial
 * Return: 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
