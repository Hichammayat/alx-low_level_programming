#include "lists.h"

/**
 * print_dlistint -  function that prints all
 * the elements of a dlistint_t list.
 * @h: adress of the first node
 * Return: numbers of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int num = 0;

	tmp = h;

	if (h == NULL)
		return (0);

	while (tmp)
	{
		printf("%d\n", tmp->n);
		num++;
		tmp = tmp->next;
	}
	return (num);
}
