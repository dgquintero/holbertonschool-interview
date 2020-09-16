#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 *
 * @lists: pointer to the list to be check
 * Return: Always 0.
 */
int check_cycle(listint_t *list)
{
    listint_t *tmp = list, *tail;

    if (!list)
        return (0);
    
    tail = list->next;
    
    while (tail)
    {
        if (tail->next)
            tail = tail->next->next;
        else
            tail = tail->next;
        tmp = tmp->next;
        if (tail == tmp)
            return (1);
    }
    return (0);
}
