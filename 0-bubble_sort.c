#include "sort.h"

/**
  * bubble_sort - Sorts an array of integers in ascending
  *
  * @array: The array to sort
  *
  * @size: The size of the array
  *
  * Return: nothing
  */
void bubble_sort(int *array, size_t size)
{
int i = 0, a = 0, max = 0, swap = 1;

if (!array || size < 2)
{
return;
}
max = size - 1;

for (; i < max; ++i)
{
if (array[i] > array[i + 1])
{
a = array[i];
array[i] = array[i + 1];
array[i + 1] = a;
swap = 1;
print_array(array, size);
}

if (swap == 1 && i == max - 1)
{
i = -1, swap = 0, --max;
}
}
}