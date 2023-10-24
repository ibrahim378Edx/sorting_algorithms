#include "sort.h"

/**
  * insertion_sort_list - Sorts an doubly linked list
  *
  * @list: The list to sort
  *
  * Return: nothing
  */
void insertion_sort_list(listint_t **list)
{
bool f = false;
listint_t *tmp = NULL, *a = NULL;

if (!list || !(*list) || !(*list)->next)
	return;

tmp = *list;
while (tmp->next)
{
if (tmp->n > tmp->next->n)
{
tmp->next->prev = tmp->prev;
if (tmp->next->prev)
	tmp->prev->next = tmp->next;
else
	*list = tmp->next;

tmp->prev = tmp->next;
tmp->next = tmp->next->next;
tmp->prev->next = tmp;
if (tmp->next)
	tmp->next->prev = tmp;

tmp = tmp->prev;
print_list(*list);

if (tmp->prev && tmp->prev->n > tmp->n)
{
if (!f)
a = tmp->next;
f = true;
tmp = tmp->prev;
continue;
}
}
if (!f)
	tmp = tmp->next;
else
	tmp = a, f = false;
}
}
