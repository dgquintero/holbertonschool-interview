#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: Pointer to the head of the list
 * Return: 1 if it is palindrome or 0 if is not
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int array[4352], i = 0, j = 0, mid;

	if (head == NULL || (head != NULL && head->next == NULL))
		return (1);

	while (tmp != NULL)
	{
		array[i] = tmp->n;
		tmp = tmp->next;
		i++;
	}
	i--, mid = i / 2;
	while (i >= mid && j <= mid)
	{
		if (array[i] != array[j])
			return (0);
		i--, j++;
	}
	return (1);
}
