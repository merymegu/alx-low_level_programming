#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int i, t, count;

	count = 0;
	if (min > max)
		return (NULL);
	t = (max - min) + 1;
	array = malloc(t * sizeof(int));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[count] = i;
			count++;
		}
		return (array);
	}
	return (NULL);
}
