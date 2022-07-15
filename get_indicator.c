#include "main.h"
/**
 *get_indicator - turns on if _printf finds a flag
 *modifier in the format string
 *@s: character that holds flag specifier
 *@f: pointer to struct
 *Return: 1 if flag is on, 0 otherwise
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
