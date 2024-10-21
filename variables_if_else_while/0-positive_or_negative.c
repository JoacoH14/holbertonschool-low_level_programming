#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/*
 * main - vacio
 * Return: 0
*sentencia if combinado con printf muestra la salida dependiendo del valor de n
 */
int main(void)
{
	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
