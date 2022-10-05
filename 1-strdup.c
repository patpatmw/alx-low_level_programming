#include "main.h"
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: the string source
 * Return: a string pointer
 */
char *_strdup(char *str)

{

	int x = 1, y = 0;

	char *s;



	if (str == NULL)

		return (NULL);

	while (str[x])

		x++;

	s = (char *)malloc(x * sizeof(char) + 1);

	if (s == NULL)

		return (NULL);

	while (y < x)

	{

		s[y] = str[y];

		y++;

	}

	s[y] = '\0';

	return (s);

}
