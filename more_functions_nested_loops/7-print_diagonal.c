#include"main.h"
/**
 * print_diagonal(int n)
 * @n: variable numerica
 * @i: variable
 * @j: variable
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
		else
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			_putchar(92);
			_putchar('\n');
		}
}
}
