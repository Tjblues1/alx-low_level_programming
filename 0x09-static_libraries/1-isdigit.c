#include "main.h"

/**
* _isdigit - checks if a char is a digit
*
* @c: int to be tested
* Return: 1 if c is a digit, 0 if not
*/
int _isdigit(int c)
{
	int t = 0;

	if (c >= '0' && c <= '9')
		t = 1;

	return (t);
}
