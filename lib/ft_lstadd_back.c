#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *begin;

    begin = *alst;
	if (*alst == NULL)
		*alst = new;
    else
    {
        while (begin -> next != NULL)
            begin = begin -> next;
        begin -> next = new;
    }
}