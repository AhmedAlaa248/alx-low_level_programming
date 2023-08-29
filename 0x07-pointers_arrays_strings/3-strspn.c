#include "main.h"

/**
 * _strspn - change pointer value
 *
 * @accept : char parameter
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, j;

	for (itr = 0; s[itr] != '\0' ; itr++)
	{
		for (j = 0; s[itr] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (itr);
		}
	}

	return (itr);

}

