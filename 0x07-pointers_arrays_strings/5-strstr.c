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

	for (; *haystack != '\0'; haystack++)
	{
		char *l1 = haystack;
		char *p1 = needle;

		while (*l1 == *p1 && *p1 != '\0')
		{
			l1++;
			p1++;
		}

		if (*p1 == '\0')
			return (haystack);
	}

	return (0);
}
