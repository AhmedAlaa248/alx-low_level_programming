#include <main.h>

/**
 * main - Entery point
 *
 * Description: A C program checks for alphabetic character
*
 * Return: Always 0 (Success)
*/


int _islower(int c)
{
	if ((c >= 97 && c <= 122)
	|| (c >= 65 && c <= 90) )
		return (1);
	return (0);
}
