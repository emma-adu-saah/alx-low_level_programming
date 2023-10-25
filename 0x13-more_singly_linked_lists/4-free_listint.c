#include "lists.h"

/**
 * free_listint - frees linked lists
 * @head: listint_t linked list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *current_node;
while (head != NULL)
{
current_node = head;
head = head->next;
free(current_node);
}
}
