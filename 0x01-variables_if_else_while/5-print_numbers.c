#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Descrption: prints all base numbers of 10
 * Return : 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
