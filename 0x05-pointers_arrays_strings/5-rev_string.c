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
	char rev;

	for (length = 0; *s != '\0'; length++)
		;

	for (i = 0; i < length / 2; i++)
	{
		rev = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = rev;
	}
}

