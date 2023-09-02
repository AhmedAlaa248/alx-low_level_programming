#include "main.h"




/**
 * _isalpha - function that prints the alphabet in lowercase
 *
 * @c : checks input of function
 *
 * Return: returns  if 'c'
*/






int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)
	|| (c >= 65 && c <= 90))
		return (1);
	return (0);
}
