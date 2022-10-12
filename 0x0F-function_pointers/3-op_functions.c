#include "3-calc.h"

/**
 * op_add - addition operator
 *
 * @x: first int
 * @y: second int
 *
 * Return: sum of the two numbers
 */
int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - subtraction operator
 *
 * @x: first int
 * @y: second int
 *
 * Return: subtraction of the two numbers
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - multiplication operator
 *
 * @x: first int
 * @y: second int
 *
 * Return: multiplication of the two numbers
 */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - division operator
 *
 * @x: first int
 * @y: second int
 *
 * Return: division of the two numbers
 */
int op_div(int x, int y)
{
	return (x / y);
}

/**
 * op_mod - remainder operator
 *
 * @x: first int
 * @y: second int
 *
 * Return: the remainder of the division of the two numbers
 */
int op_mod(int x, int y)
{
	return (x % y);
}
