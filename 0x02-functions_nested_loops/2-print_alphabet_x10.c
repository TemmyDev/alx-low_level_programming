#include "main.h"
/**
 *main - print alphabet
 *Description - print
 *Return: 0
 */
void print_alphabet(void)
{
	int alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');

	}
}
