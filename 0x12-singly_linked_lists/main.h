#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_list(const list_t *h);


#endif
