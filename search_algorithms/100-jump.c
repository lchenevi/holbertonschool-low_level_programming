#include "search_algos.h"

/**
 * jump_search - jump search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, step;

	a = 0;
	b = 0;
	step = sqrt(size);

	/*Check for edge cases*/
	if (array == NULL || size == 0)
		return (-1);

	/*Perform the jump search*/
	while (b < size && array[b] < value)
	{
		/*Update 'a' to the last successful position*/
		a = b;
		/*Move 'b' ahead by 'step' positions*/
		b += step;
		/*Print the checked value at index 'a'*/
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	/*Print the range where the value is found*/
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	/*Perform linear search in the identified range*/
	while (a < b)
	{
		/*Print the checked value at index 'a'*/
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		/*Check if the value is found*/
		if (array[a] == value)
			return (a);
		/*Move to the next element in the range*/
		a++;
	}
	/*If the value is not found, return -1*/
	return (-1);
}
