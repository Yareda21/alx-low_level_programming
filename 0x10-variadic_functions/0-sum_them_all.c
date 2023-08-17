#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all passed parameters
 * @n: number of paramters.
 * @...: variable number of arguments
 * Return:- the sum of all variables.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	unsigned int sum = 0;

	va_start(pa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);

	return (sum);
}

