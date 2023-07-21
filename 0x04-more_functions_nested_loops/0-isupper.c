#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
 
int _isupper(int c)
{
	if (isupper(c))
		return 1;
	else
		return 0;
}
