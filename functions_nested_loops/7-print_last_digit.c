#include"main.h"

int print_last_digit(int numero)
{	int last_digit;

	last_digit = numero % 10;
	if (last_digit < 0)
{
	last_digit = -last_digit;
}
	return (last_digit);
	}
