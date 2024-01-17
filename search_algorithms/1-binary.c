#include "search_algos.h"

/**
 * print_array - print values of actual array
 * @array: array given as parameter
 * @left: left index of the array
 * @right: right index of the array
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	/*Iterate through the array elements from left to right*/
	while (left <= right)
	{
		/*Check if the current element is not the last in the array*/
		if (left < right)
			/*Print the current element followed by a comma and space*/
			printf("%d, ", array[left]);
		else
			/*Print the last element without a comma and space*/
			printf("%d", array[left]);

		/*Move to the next element in the array*/
		left = left + 1;
	}
	/*Print a newline character after printing the array*/
	printf("\n");
}

/**
 * binary_search - performs binary search over a given array
 * @array: given array
 * @size: array size
 * @value: value to search
 * Return: index of value if it's found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, middle;

	/*Check if the array is NULL*/
	if (array == NULL)
		return (-1);

	/*Initialize start and end indices for binary search*/
	start = 0;
	end = (int)size - 1;

	/*Does the binary search*/
	while (start <= end)
	{
		/*Print the current subarray being searched*/
		printf("Searching in array: ");
		print_array(array, start, end);

		/*Calculate the middle index using integer division*/
		middle = (double)((start + end) / 2);

		/*Check if the middle element is the target value*/
		if (array[middle] == value)
			return ((int)middle); /*Return the index if value is found*/

		/*If the value is greater, search the right half of the array*/
		else if (value > array[middle])
			start = middle + 1;

		/*If the value is smaller, search the left half of the array*/
		else
			end = middle - 1;
	}
	/*Return -1 if the value is not found in the array*/
	return (-1);
}
