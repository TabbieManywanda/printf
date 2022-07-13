#include "main.h"
#include <stddef.h>
/**
 *get_print - selects right printing function
 *@s: conversion specifier
 *
 *Return: pointer to matching printing function
 */
int (*get_print(char s))(va_list, indicators_t *)
{
	fH arr[] = {
		{'i', printInteger},
		{'s', printStr},
		{'c', printC},
		{'d', printInteger},
		{'u', unsignPrint},
		{'x', hexaPrint},
		{'X', hexaBig},
		{'b', terribletwos},
		{'o', eightPrint},
		{'R', rot13Print},
		{'r', revPrint},
		{'S', capitalsPrint},
		{'p', printAddress},
		{'%', percentage},
		};

	int indicators = 14;

	register int i;

	for (i = 0; i < indicators; i++)
	{
		if (arr[i].c == s)
		{
			return (arr[i].f);
		}
	}

	return (NULL);
}
