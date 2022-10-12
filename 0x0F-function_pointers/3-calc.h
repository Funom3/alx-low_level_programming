#ifndef CALC
#define CALC
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * op_add - add two numbers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: a + b
 */
int op_add(int a, int b);

/**
 * op_sub - subtract two numbers
 *
 * @a: number 1
 *
 * @b: number 2
 *
 * Return: a - b
 */
int op_sub(int a, int b);

/**
 * op_mul - multiplies two number
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: a * b
 */
int op_mul(int a, int b);

/**
 * op_div - divides two numbers
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return; a / b
 */
int op_div(int a, int b);

/**
 * op_mod - module a to b
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: a % b
 */
int op_mod(int a, int b);


int (*ger_op_func(char *s))(int, int);

/**
 * struct op - struct op
 *
 * @op: the operator
 *
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t

#endif
