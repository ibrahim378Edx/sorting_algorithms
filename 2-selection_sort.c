#include "sort.h"

/**
  * selection_sort - selection algorathim
  *
  * @array: list to sort
  *
  * @size: size of list
  *
  * Return: nothing
  */
void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 1, a = 0, m = 0, l = size - 1;

if (size < 2)
{
return;
}
while (i < l)
{
if (j == size)
{
if (i != m)
{
a = array[i];
array[i] = array[m];
array[m] = a;
print_array(array, size);
}

++i;
m = i;
j = i + 1;
continue;
}

if (array[m] > array[j])
{
m = j;
}
++j;
}
}
