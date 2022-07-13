#include "main.h"
/**
 *get_indicator - turns on indicators if _printf
 *find modifier in format string
 *@s: specifier
 *@f: pointer to struct indicators
 *
 *Return: 1 if indicator turned on else 0
 */
int get_indicator(char s, indicators_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
