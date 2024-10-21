#include<stdio.h>
/**
 * main - nada;
 * Return: 0;
 */
int main(void)
	{
	/**
	 *uso printf en cada linea para mostrar cada tipo de dato
	*/
	 printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
	}
