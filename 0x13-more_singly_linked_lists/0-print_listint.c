#include "lists.h"

/**
 * print_listint - Outputs the integer values stored in a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
while (h)
{
printf("%d\n", h->n);
num_nodes++;
h = h->next;
}
return (num_nodes);
}
