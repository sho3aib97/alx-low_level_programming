#include "3-calc.h"

/**
 * op_add - add two integers together
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: value of a + b
*/
int op_add(int a, int b)
{
	if (a && b)
		return (a + b);
}

/**
 * op_sub - subtract from two integers
 * @a: int 1
 * @b: int 2
 *
 * Return: int value
*/
int op_sub(int a, int b)
{
	if (a && b)
		return (a - b);
}

/**
 * op_mul - multiply 2 int
 * @a: int 1
 * @b: int 2
 *
 * Return: int value
*/
int op_mul(int a, int b)
{
	if (a && b)
		return (a * b);
}

/**
 * op_div - divide a by b
 * @a: int 1
 * @b: int 2
 *
 * Return: int value
*/
int op_div(int a, int b)
{
	if (a && b)
		return (a / b);
}

/**
 * op_mod - return the remainder of division
 * @a: int 1
 * @b: int 2
 *
 * Return: int value
*/
int op_mod(int a, int b)
{
	if (a && b)
		return (a % b);
}
