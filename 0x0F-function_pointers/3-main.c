#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of operation
 *
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operand;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operand = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operand) == NULL || operand[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operand == '/' && num2 == 0) ||
			(*operand == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operand)(num1, num2));
	return (0);
}
