#include <stdio.h>
/**
 * main - main block
 * Description: use putchar function to print the alphabet in lowercase
 * return 0
 *
 */
int main(void)
{

char ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

putchar('\n');
return (0);
}
