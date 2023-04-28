#include "lists.h"

void myFirst(void) __attribute__ ((constructor));

/**
 * myFirst - This function prints a string before the main() program executed
 * Return: nothing
 */
void myFirst(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
