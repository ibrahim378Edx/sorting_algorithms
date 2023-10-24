#include "sort.h"

/**
  * quick_sort - quick sort algo
  *
  * @array: array to sort
  *
  * @size: size of array
  *
  * Return: nothing
  */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
{
return;
}
quick_sort_r(array, 0, size - 1, size);
}

/**
  * quick_sort_r - recursion
  *
  * @array: list
  *
  * @lower: ---
  *
  * @higher: ---
  *
  * @size: ---
  *
  * Return: nothing
  */
void quick_sort_r(int *array, int lower, int higher, size_t size)
{
int l_p = 0;
if (lower < higher)
{
l_p = lo_part(array, lower, higher, size);
quick_sort_r(array, lower, l_p - 1, size);
quick_sort_r(array, l_p + 1, higher, size);
}
}

/**
  * lo_part - ---
  *
  * @array: ---
  *
  * @lower: ---
  *
  * @higher: ---
  *
  * @size: ---
  *
  * Return: Nothing!
  */
int lo_part(int *array, int lower, int higher, size_t size)
{
int i = 0, j = 0, pi = 0, a = 0;

pi = array[higher];
i = lower;

for (j = lower; j < higher; ++j)
{
if (array[j] < pi)
{
a = array[i];
array[i] = array[j];
array[j] = a;

if (a != array[i])
{
print_array(array, size);
}
++i;
}
}

a = array[i];
array[i] = array[higher];
array[higher] = a;

if (a != array[i])
{
print_array(array, size);
}
return (i);
}
