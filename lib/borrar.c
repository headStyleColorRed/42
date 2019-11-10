#include "libft.h"


int main (void)
{
    t_list name1;
    t_list name2;
    t_list name3;
    t_list name4;
    t_list *begin;

    begin = &name1;
    name1.next = &name2;
    name2.next = &name3;
    name3.next = &name4;
    name4.next = 0;

    name1.content = 30;
    name2.content = 34;
    name3.content = 23;
    name4.content = 68;


    printf("length: %d\n", ft_lstsize(begin));
}
