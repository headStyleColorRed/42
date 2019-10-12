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
    
    
    return (0);
}

char column_splitter (char num)
{
    int i;
    char col_up[4];
    char col_down[4];
    char row_left[4];
    char row_right[4];
    
    i = 0;
    
    if ( i < 4)
    {
        col_up[i] = num;
        i++;
    }
    else if (i >= 4 && i <= 7)
    {
        col_down[i - 4] = num;
        i++;
    }
    else if (i >= 8 && i <= 11)
    {
        row_left[i - 8] = num;
        i++;
    }
    else if (i >= 12 && i <= 15)
    {
        row_right[i - 12] = num;
        i++;
    }
    
    printf("Numeros col_up: %s", col_up);
    return(col_up[0]);
}


void    space_reader(char *list)
{
    int i;
    
    i = 0;
    while (list[i] != '\0')
    {
        if (list[i] > 48 && list[i] < 53)
        {
            printf("%c", list[i]);
            //column_splitter (list[i]);
        }
        i++;
    }
}



int main (int argc, char *argv[])
{
    (void) argc;
    (void) argv;
    char number_list[15];
    int error_return;
               
    //Asignaciones
     char *ptr_number_list = number_list;
     ptr_number_list = argv[1];
    error_return = error_manager(ptr_number_list);
    
    //Resolucion de errores
    printf("Error return: %d\n", error_return);
    
    if (error_return == 0)
    {
        //space_reader (ptr_number_list);
        printf("todo bajo control chicos :D");
    }
    
    return (0);
}
