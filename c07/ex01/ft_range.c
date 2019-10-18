#include <stdio.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
    int *number_list;
    int i;
    int total_iteration;
    
    total_iteration = max - min;
    if (min > max)
        return (0);
    if (min < 0)
        total_iteration = max + (min * -1);
    i = 0;
    number_list = (int *) malloc(sizeof(int) * total_iteration);
    while (i < total_iteration)
        number_list[i++] = min++;
    number_list[i++] = '\0';
    return(number_list);
}
