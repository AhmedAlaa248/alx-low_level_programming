#include "main.h"

/**
 *_isupper - function that prints the alphabet in lowercase
 *
 * @c : checks input of function
 *
 * Return: returns 1 if 'c' is uppercase
*/



int _isupper(int c)
{
	
	if (c > 64 && c < 91)
		return 1;
	else 
		return 0;
}
