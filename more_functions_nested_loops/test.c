#include <stdio.h>

void print(char *str)
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
int main(void)
{
    char *my_string = "Hello, World!"; // Exemple de chaîne à imprimer
    print(my_string); // Appelle la fonction print
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé avec succès
