#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int length;
    t_list *begin;

    if (!lst)
        return (0);
    length = 0;
    begin = lst;
    while (begin -> next != NULL)
    {
        length++;
        begin = begin -> next;
    }
	if (begin->next == NULL)
		length++;
    return (length);
}
