#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - structure pour une liste chaînée simple
 * @str: chaîne de caractères (dynamique ou statique)
 * @len: longueur de la chaîne
 * @next: pointeur vers le nœud suivant
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif
