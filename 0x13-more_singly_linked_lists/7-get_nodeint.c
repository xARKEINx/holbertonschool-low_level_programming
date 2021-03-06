#include "lists.h"
/**
 * get_nodeint_at_index - Function
 * @head: Pointer
 * @index: index
 * count: Iterator
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head != NULL)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
