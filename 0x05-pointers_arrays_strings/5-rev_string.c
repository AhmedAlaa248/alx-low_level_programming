#include "main.h"

/**
 * rev_string - change pointer value
 *
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

void rev_string(char *s)
{
	int length, i;

	for (length = 0; *s != '\0'; length++)
		;

	char rev[length];

	for (i = 0; i < length; i++)
	{
		rev[i] = *s[length];
		lecngth--;
	}

	*s = rev;
}

