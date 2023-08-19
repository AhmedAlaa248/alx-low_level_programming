#include <unistd.h>
#include "main.h"



/**
 * _putchar writes the character c to stdout
 *
 * Return: on Success 1
 * 		on error -1 is returned. and errno is set appropily
*/

int _putchar(char c)
{

	return (write(1, &c, 1));
}

