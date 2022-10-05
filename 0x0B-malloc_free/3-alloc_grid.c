#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2d array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
int **array, x, y;
int len = width * height;
if (len <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
array[x] = (int *)malloc(sizeof(int) * width);
if (array[x] == NULL)
{
for (x--; x >= 0; x--)
free(array[x]);
free(array);
return (NULL);
}
}
for (x = 0; x < height; x++)
for (y = 0; y < width; y++)
array[x][y] = 0;
return (array);
}
