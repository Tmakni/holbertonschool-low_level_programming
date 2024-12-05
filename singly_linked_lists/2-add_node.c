#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée
 * @head: Double pointeur vers le premier nœud de la liste
 * @str: Chaîne de caractères à dupliquer dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud ou NULL en cas d'échec
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *i;

	if (str == NULL)
	{
		return (0);
	}
	i = malloc(sizeof(list_t));
	if (i == NULL)
	{
		return (0);
	}

	i->str = strdup(str);
	if (i->str == NULL)
	{
		free(i);
		return (0);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	i->len = count;
	i->next = *head;
	*head = i;

	return (i);
}
