#include "lists.h"

/**
 * dlistint_len - Renvoie le nombre d'éléments dans une liste doublement cine
 * @h: Pointeur vers le début de la list
 *
 * Return: Le nombre d'éléments dans la lte
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
