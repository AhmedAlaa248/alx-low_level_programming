#include "main.h"

/**
 * *_strcpy - change pointer value
 *
 * @src : char parameter
 * @dest : char parameter
 *
 * Return: Always 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

