#include "main.h"

/**
 * _realloc - This function realloc a new space memory
 * @ptr: The current pointer value
 * @old_size: The old size of ptr
 * @new_size: The new size of pointer
 * Return: NULL or a pointer to a new string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (new_size == old_size)
	{
		ptr_new = ptr;
	}
	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr_new = NULL;
	}
	if (new_size > old_size)
	{
		ptr_new = malloc(new_size);

		ptr_new = ptr;
	}

	return (ptr_new);
}
