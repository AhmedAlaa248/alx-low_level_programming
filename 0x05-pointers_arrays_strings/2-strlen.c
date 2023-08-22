#include "main.h"

/**
 * _strlen - change pointer value
 *
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;
}
