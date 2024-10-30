#include"main.h"
/**
 * print_most_numbers - nada
 */
void print_most_numbers(void)
	{
		int num;
		for (num = '0'; num <= '9'; num++)
		{
			_putchar(num);
		}
			if (num == '2' || num == '4')
			{
				_putchar(' ');
			}
	}
