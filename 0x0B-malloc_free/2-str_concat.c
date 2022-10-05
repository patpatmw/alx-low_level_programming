#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: New memory location, otherwise NULL
 */
char *str_concat(char *s1, char *s2)

{

	char *str;

	int len1 = 0, len2 = 0;

	int x, y;



	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	while (s1[len1])

		len1++;

	while (s2[len2])

		len2++;

	len2++;

	str = malloc(sizeof(char) * (len1 + len2));

	if (str == NULL)

		return (NULL);

	x = 0;

	y = 0;

	while (s1[x])

		str[y++] = s1[x++];

	x = 0;

	while (s2[x])

		str[y++] = s2[x++];

	return (str);

}
