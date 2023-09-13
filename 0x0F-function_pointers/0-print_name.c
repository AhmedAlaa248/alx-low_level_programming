#include "function_pointers.h"

/**
 * print_name - change pointer value
 *
 * @name : char parameter
 * @f : the printing func
 * @* : char parameter
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
