#include "3-calc.h"

int op_add(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - returns the sum of two nums
* @a: the first num
* @b: the second num
* Return: the sun of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - returns the difference of two nums
* @a: the first num
* @b: the second num
* Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns the product of two nums
* @a: the first num
* @b: the second num
* Return: the product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - returns the division of two nums
* @a: the first num
* @b: the second num
* Return: the quotient of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - returns the remainder of two nums
* @a: the first num
* @b: the second num
* Return: the remainder of the div of a by b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
