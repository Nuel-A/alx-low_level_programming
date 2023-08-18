#include "main.h"
/**
 * _isdigit - this checks for a digit
 *
 *@c: parameter of the function
 *
 *Return: 1 if it is a digit, 0 if otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
