#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 *struct indicators - containing indicators that come on
 *when a specifier is passed to _printf()
 *@plus: '+'
 *@space: ' '
 *@hash: '#'
 */
typedef struct indicators
{
	int plus;
	int space;
	int hash;
} indicators_t;

/**
 *struct formatHandler - chooses the right function
 *depending on the format specifier passed to _printf()
 *@c: format specifier
 *@f: pointer to function
 */
typedef struct formatHandler
{
	char c;
	int (*f)(va_list ap, indicators_t *f);
} fH;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);

int rot13Print(va_list l, indicators_t *f);
int revPrint(va_list l, indicators_t *f);
int capitalsPrint(va_list l, indicators_t *f);
int printAddress(va_list l, indicators_t *f);
int percentage(va_list l, indicators_t *f);

char *convert(unsigned long int num, int base, int lowercase);
int (*get_print(char s))(va_list, indicators_t *);
int get_indicator(char s, indicators_t *f);

int printStr(va_list l, indicators_t *f);
int printC(va_list l, indicators_t *f);

int printInteger(va_list l, indicators_t *f);
void printNum(int n);
int unsignPrint(va_list l, indicators_t *f);
int counter(int i);
int hexaPrint(va_list l, indicators_t *f);
int hexaBig(va_list l, indicators_t *f);
int terribletwos(va_list l, indicators_t *f);
int eightPrint(va_list l, indicators_t *f);

#endif
