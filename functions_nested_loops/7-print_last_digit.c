#include"main.h"
/**
 * print_last_digit - nada
 * @numero: variable que almacena numero
 * Return: 0
 */
int print_last_digit(int numero)
{	int last_digit;

	last_digit = numero % 10;
	if (last_digit < 0)
{
	last_digit = -last_digit;
}
	_putchar(last_digit + '0');
	return (last_digit);
	}
