#include "main.h"

/**
 * main - Entery point
 *
 * Description: A C program that checks for lowercase character
*
 * Return: Always 0 (Success)
*/


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
