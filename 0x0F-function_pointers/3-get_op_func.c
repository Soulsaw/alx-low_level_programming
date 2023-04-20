#include "3-calc.h"
/**
 * get_op_func - This function get the correct function asked by user
 * @s: The operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	char *(*var)(char *) = get_op_func;

	i = 0;
	while (ops[i])
	{
		if ( var(s) == ops[i].op)
			return ((ops[i].f)(int, int));

		i++;
	}

	return (NULL);
}

