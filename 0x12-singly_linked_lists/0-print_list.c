#include "lists.h"

/**
 * _strlen - returns the lemgth of a string
 * @s: the string
 *
 * Return: integer length
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - change pointer value
 *
 * @h : counter parameter
 *
 * Return: the integer
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		printf("%s[0] (nil)");

	while (h != NULL)
	{
		printf("[%d] %s\n", _strlen(h->str));
		h = h->next;
		i++;
	}

	return (i);
}
