#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * in lowercase.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char e;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (e = 'a'; e <= 'z'; e++)
			_putchar(e);

		_putchar('\n');
	}

}
