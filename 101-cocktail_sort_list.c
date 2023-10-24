#include "sort.h"

/**
  * cocktail_sort_list - Sorts a doubly linked list
  *
  * @list: The doubly linked list
  *
  * Return: nothing
  */
void cocktail_sort_list(listint_t **list)
{
listint_t *c = NULL, *lt = NULL, *rt = NULL;
int ct = INCREMENT;

if (!list || !(*list) || !(*list)->next)
	return;

c = *list;
lt = c;
rt = get_limit(*list);

while (lt != rt)
{
if (c->n == c->next->n)
	break;
else if (c->n > c->next->n && ct == INCREMENT)
	swapper(list, c), print_list(*list);
else if (c->next->n < c->n && ct == DECREMENT)
    swapper(list, c), c = c->prev, print_list(*list);
else if (ct == INCREMENT)
	c = c->next;
else if (ct == DECREMENT)
{
c = c->prev;
}
if (ct == DECREMENT && c->next == lt)
{
ct = INCREMENT;
c = c->next;
}

if (ct == INCREMENT && c->prev == rt)
{
rt = rt->prev;
ct = DECREMENT;
c = c->prev;
}
}
}

/**
  * swapper - Swap two nodes
  *
  * @list: The double linked lists
  *
  * @node: The node to swap
  *
  * Return: nothing
  */
void swapper(listint_t **list, listint_t *node)
{
node->next->prev = node->prev;

if (node->next->prev)
{
node->prev->next = node->next;
}
else
{
*list = node->next;
}
node->prev = node->next;
node->next = node->next->next;
node->prev->next = node;

if (node->next)
{
node->next->prev = node;
}
}

/**
  * get_limit- Counts the number of elements
  *
  * @h: The double linked list
  *
  * Return: Number of elements
  */
listint_t *get_limit(listint_t *h)
{
listint_t *c = h;

while (c->next != NULL)
{
c = c->next;
}
return (c);
}
