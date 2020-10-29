#ifndef VARIADICS_H_
#define VARIADICS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


/**
 * struct type - structure type to use
 * @type_format: format char to use
 * @f: pointer to function to link at the format
 *
 */


typedef struct type
{
	char *type_format;
	void (*f)();
} type_t;

void print_char(va_list s);
void print_int(va_list s);
void print_float(va_list s);
void print_string(va_list s);

void print_all(const char * const format, ...);


#endif
