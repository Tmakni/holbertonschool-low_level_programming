#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nœud à la fin d'une liste chaînée
 * @head: Double pointeur vers le premier nœud de la liste
 * @str: Chaîne de caractères à dupliquer
 * Return: Adresse du nouveau nœud ou NULL en cas d'échec
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;

	if (str == NULL)
		return (0);

	new_node = malloc(sizeof(list_t));
	if (new_node == 0)
		return (0);

	new_node->str = strdup(str);
	if (new_node->str == 0)
	{
		free(new_node);
		return (0);
	}

	new_node->len = 0;
	while (str[new_node->len] != '\0')
	{
		new_node->len++;
	}
	new_node->next = 0;

	if (*head == 0)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
