#include"main.h"
#include<stdio.h>
/**
 * main - nada
 * @argc: variable
 * @argv: variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
