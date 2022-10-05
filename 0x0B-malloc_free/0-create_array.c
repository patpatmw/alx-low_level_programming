#include "main.h"



/**

 * create_array - function that creates an array of chars

 * @size: size of memory for created array

 * @c: the character for the array

 *

 * Return: a pointer to the array, or NULL if it fails

 */

char *create_array(unsigned int size, char c)

{

	unsigned int a;

	char *b;



	if (size == 0)

		return (NULL);

	b = (char *)malloc(size * sizeof(char));

	if (b == NULL)

		return (NULL);

	for (a = 0; a < size; a++)

		b[a] = c;



	return (b);

}
