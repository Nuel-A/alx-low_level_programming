#include<stdio.h>
#include<stdlib.h>
/**
 *main - Entry point
 *
 *Description: This program prints lowecase alphabeths in reverse.
 *
 * Return: Always (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('z' - 1);
	putchar('\n');
	return (0);

}
