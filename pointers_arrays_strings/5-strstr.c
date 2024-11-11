#include"main.h"
/**
 * _strstr - nada
 * @haystack: variable
 * @needle: variable
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystackb;
	char *needleb;

	while (*haystack != '\0')
	{
		haystackb = haystack;
		needleb = needle;

		while (*haystack != '\0' && *needleb != '\0' && *haystack == *needleb)
		{
			haystack++;
			needleb++;
		}
		if (!*needleb)
			return (haystackb);
		haystack = haystackb + 1;
	}
	return (0);
}
