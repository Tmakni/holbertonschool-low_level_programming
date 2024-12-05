#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - structure pour une liste chaînée simple
 * @n: chaîne de caractèr
 * @prev: longueur de la chaîne
 * @next: pointeur vers le nœud suivant
 */

typedef struct list_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
