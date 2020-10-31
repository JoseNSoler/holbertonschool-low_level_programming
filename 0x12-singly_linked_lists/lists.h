#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string with malloc
 * @len: length of string
 * @next: pointer to next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);


#endif
