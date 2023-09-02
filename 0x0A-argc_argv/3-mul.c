#include <stdio.h>

/**
 * main - change pointer value
 *
 * @argc : char parameter
 * @argv : j
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, d, n, l, f, dig;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	dig = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if(s[i] == '-')
			d++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';

			if (d % 2)
				dig = -dig;

			n = n * 10 + dig;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

