#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{

	int tmp, index;

	for (index = n - 1; index >= n/ 2; index--)
	{
	tmp = a[n - 1 - index];
	a[index] = tmp;
	}
}
