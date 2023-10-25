#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *current_node;
if (head == NULL || *head == NULL)
return;
while (*head != NULL)
{
current_node = *head;
*head = (*head)->next;
free(current_node);
}
*head = NULL;
}
