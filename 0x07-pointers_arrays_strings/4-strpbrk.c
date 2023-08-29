#include "main.h"

/**
 * *_strpbrk - change pointer value
 *
 * @s : char parameter
 * @accept :char parameter
 *
 * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int itr, j;

	for (itr = 0; itr != '\0'; itr++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[itr] == accept[j])
			{
				return (&s[itr]);
			}
		}
	}
	return (0);
}

