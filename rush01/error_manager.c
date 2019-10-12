//gcc -Werror -Wextra -Wall error_manager.c sudoku.c && ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

#include <stdio.h>
#include <unistd.h>

void    ft_putchar_error(void)
{
    char error_notification[] = "Error\n";
    
    write(1, &error_notification, 6);
}

int     error_manager (char *list)
{
    int j;
    int number_counter;
    
    j = 0;
    number_counter = 0;
    
    while (list[j] != '\0') //Iteramos sobre la lista
    {
        if ((list[j] < 49 || list[j] > 52) && list[j] != 32) //Devuelve error si en la lista hay cosas diferentes de +4<->+1 o espacios
        {
            //printf("falla en error 1");
            ft_putchar_error();
            return (1);
        }
        else if (list[j] > '0' && list[j] < '5') //Devuelve error si hay más de 16 números.
        {
            number_counter++;
            if ( number_counter > 16)
            {
                //printf("falla en error 2");
                ft_putchar_error();
                return (2);
            }
        }
        
        j++;
    }
    
    if ( number_counter < 16) //Devuelve error si hay números de menos
    {
        //printf("falla en error 3");
        ft_putchar_error();
        return (3);
    }
    
    
    return (0);
}
