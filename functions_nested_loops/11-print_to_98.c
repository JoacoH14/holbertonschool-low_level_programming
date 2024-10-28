#include"main.h"
#include<stdio.h>
/**
 * print_to_98(int n)
 * @n: variable que almacena valor numerico
 * Return: 0
 */
void print_to_98(int n)
{
	for (n = n; n <= 97; n++)
	{
		printf("%d, ", n);
	}
	for (n = n; n >= 99; n--)
		printf("%d, ", n);
}
