#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The sum of two numbers.
 */
int op_add(int a, int b)
{
	int sum;
	sum = a + b;
	return (sum);
}
/**
 * op_sub - Returns the difference of a and b numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The difference of two numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: The product of two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

