#include <stdio.h>
#include <stdlib.h>
/**
 * main - This prints Alphabets
 *
 * Return: always (0)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
	putchar(i);
	putchar('\n');

	return (0);

}
