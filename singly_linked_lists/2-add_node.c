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
