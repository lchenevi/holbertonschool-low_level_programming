#include "search_algos.h"

/**
 * linear_search - performs linear search over a given array
 * @array: given array
 * @size: array size
 * @value: value to search
 * Return: index of value if it's found otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i; /*loop variable*/
	int result = -1; /*Initialize result to -1, indicating value not found*/

	/*Check if the array is NULL*/
	if (array == NULL)
		return (-1);

	/*Loop through each element of the array*/
	for (i = 0; i < (int)size; i++)
	{
		/*Print the current element being checked*/
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		/*Check if the current element is equal to the target value*/
		if (array[i] == value)
		{
			/*Update the result with the index where the value is found*/
			result = i;

			/*Break out of the loop since the value is found*/
			break;
		}
	}
	/*Return the final result, which is the index or -1 if not found*/
	return (result);
}
