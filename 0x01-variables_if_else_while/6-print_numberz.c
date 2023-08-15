#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: This program Prints all ingle digital of base 10numbers
 * follwed by a new line using only putchar function.
 *
 * Return: Always (0)
 */
int main(void)
{
	int i;

		for (i = 0; i < 10; i++)

		putchar('0' + i);
		putchar('\n');

	return (0);

}
