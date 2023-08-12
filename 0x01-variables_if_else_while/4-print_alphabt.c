#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all alphabets except q and e in lowercase
 * followed by a new line.
 *
 * Return: Always (0)
 */
int main(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(1);
	}
	putchar('\n');

	return (0);

}
