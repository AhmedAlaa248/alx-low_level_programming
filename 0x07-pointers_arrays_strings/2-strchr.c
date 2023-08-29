#include "main.h"

/**
 *  *_strchr - change pointer value
 *
 * @c : char parameter
 * @s : string parameter
 *
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	unsigned int itr;

	for (itr = 0; s[itr] >=  '\0'; itr++)
	{
		if (s[itr] == c)
			return (s + itr);
	}

	return ('\0');
}

