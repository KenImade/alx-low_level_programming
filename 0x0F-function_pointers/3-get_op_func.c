#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the operation function chosen by the user
 *
 * @operand: operator argument
 *
 * Return: function pointer of operator function
 */
int (*get_op_func(char *operand))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *operand)
			i++;
	return (ops[i].f);
}
