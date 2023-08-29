#include "main.h"

/**
 * *_strstr - change pointer value
 *
 * @haystack : char parameter
 * @needle : char parameter
 *
 * Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int itr, j;

	for (itr = 0; haystack[itr] != '\0'; itr++)
	{
		if (haystack[itr] == needle[0])
		{
			for (j = 1; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			{
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (0);

}

