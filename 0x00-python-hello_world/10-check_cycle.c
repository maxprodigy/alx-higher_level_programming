#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *fast_ptr = list, *slow_ptr = list;
	while(slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (fast_ptr == slow_ptr)
			return(1);
	}
	return(0);
}
