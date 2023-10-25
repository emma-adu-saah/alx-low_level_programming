#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list of type listint_t.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
size_t num_nodes = 0;
while (h)
{
num_nodes++;
h = h->next;
}
return (num_nodes);
}
