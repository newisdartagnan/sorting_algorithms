#include "sort.h"
/**
 * bubble_sort - sort array elements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	int i, n, tmp;

	if (size < 2)
		return;
	else
	{
		if (!array || size == 0)
		return;
		tmp = 0;
		n = size - 1;
		while (n)
		{
			for (i = 0; i < n; i++)
			{
				tmp = array[i];
				if (tmp > array[i + 1])
				{
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					print_array(array, size);
				}

			}

			n -= 1;
		}
	}

}
