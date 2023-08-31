#include "main.h"

/**
 * last - change pointer value
 *
 * @s : char parameter
 * @start : int parameter
 * @end  : int parameter
 * @mode : int parameter
 *
 * Return: Always 0 (Success)
*/

int check(char *s, int start, int end, int mode);
int last(char *s);

int last(char *s)
{
	int cnt = 0;

	if (*s != '\0')
		cnt += last(s + 1) + 1;

	return (cnt);
}

/**
 * is_palindrome - change pointer value
 *
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

int is_palindrome(char *s)
{
	int end = last(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - change pointer value
 *
 * @s : char parameter
 * @start : int parameter
 * @end  : int parameter
 * @mode : int parameter
 *
 * Return: Always 0 (Success)
*/

int check(char *s, int start, int end, int mode)
{
	if ((start == end && mode != 0) ||
	  (start == end + 1 && mode == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mode));
}

