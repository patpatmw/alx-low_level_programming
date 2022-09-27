#include "main.h"

/**

 * _memset - function fills the first n bytes

 * of the memory area pointed to by s

 * with the constant byte b

 * @s: memory area to fill

 * @b: constant byte to fill

 * @n: bytes in memory yo fill

 *

 * Return: the memory area filled s

 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int x;



	for (x = 0; x < n; x++)

	{

		s[x] = b;

	}



	return (s);

