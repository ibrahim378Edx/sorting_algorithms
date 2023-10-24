#include "sort.h"

/**
 * shell_sort - shell method
 *
 * @array: list to sort
 *
 * @size: size
 *
 * Return: nothing
*/

void shell_sort(int *array, size_t size)
{
int in = 0, out = 0, r = 1, a = 0;

if (!array || size < 2)
{
return;
}
while (r < (int) size / 3)
{
r = r * 3 + 1;
}
while (r > 0)
{
out = r;
while (out < (int) size)
{
a = array[out];
in = out;

while (in > r - 1 && array[in - r] >= a)
{
array[in] = array[in - r];
in = in - r;
}

array[in] = a;
out++;
}
print_array(array, size);
r = (r - 1) / 3;
}
}
