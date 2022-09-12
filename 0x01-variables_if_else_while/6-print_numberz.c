#include <stdio.h>
/**
 * main - main block
 * Description: prints all digit from 1 - 10
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
