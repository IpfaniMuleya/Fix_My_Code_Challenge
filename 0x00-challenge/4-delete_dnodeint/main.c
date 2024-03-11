#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Test the doubly linked list functions
 *
 * Return: Always 0
 */
int main(void)
{
    dlistint_t *head = NULL;

    /* Add some nodes */
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);

    /* Print the list */
    printf("Original list:\n");
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete a node at index 2 */
    delete_dnodeint_at_index(&head, 2);
    printf("After deleting node at index 2:\n");
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete a node at index 0 */
    delete_dnodeint_at_index(&head, 0);
    printf("After deleting node at index 0:\n");
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete a node at index 2 (which doesn't exist now) */
    delete_dnodeint_at_index(&head, 2);
    printf("After attempting to delete node at index 2 (doesn't exist):\n");
    print_dlistint(head);
    printf("-----------------\n");

    /* Free the list */
    free_dlistint(head);

    return (0);
}
