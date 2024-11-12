#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *create_array(unsigned int size, char c)
{
	int *str;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	str = malloc (sizeof (char) * size);
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (i = 0 && i < size)
	{
		str[i] = c;
		i++;
	}
	
	free(str);
	return (0);
}
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
