#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap tree from an array
<<<<<<< HEAD
 * @array: input array
 * @size: size of array
 * Return: pointer to the root node of the created Binary Heap,
 * or NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	while (i < size)
	{
		heap_insert(&root, array[i]);
		i++;
	}
=======
 * @array: a pointer to the first element of the array to be converted
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

>>>>>>> ebead172d2ed19bceee6ceb9ffcaa1079216d941
	return (root);
}
