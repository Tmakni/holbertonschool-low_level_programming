#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t node_count = 0; // Initialisation du compteur

	while (h != NULL) // Tant qu'il y a des nœuds dans la liste
	{
		if (h->str == NULL) // Si la chaîne est NULL
		printf("[0] (nil)\n");
	else // Sinon, afficher la longueur et la chaîne
		printf("[%u] %s\n", h->len, h->str);

	node_count++; // Incrémenter le compteur de nœuds
	h = h->next;  // Passer au prochain nœud
	}
	return node_count; // Retourner le nombre total de nœuds
}
