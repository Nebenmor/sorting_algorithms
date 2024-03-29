#include <stdio.h>
#include "sort.h"

/**
 * print_list - This function prints a list of integers
 *
 * @list: represents the list to be printed
 */
void print_list(const listint_t *list)
{
	int i = 0;

	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
