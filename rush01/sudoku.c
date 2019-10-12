#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//Llamadas a funciones externas:
int     error_manager (char *list);
void    matrix_generator(char *col_up, char *col_down, char *row_left, char *row_right);



// Funciones presentes
void column_splitter (int *no_space_list)
{
    int i;
    char col_up[] = "0000";
    char col_down[] = "0000";
    char row_left[] = "0000";
    char row_right[] = "0000";
    
    i = 0;
    while (no_space_list[i] != '\0')
    {
        if ( i <= 3)
            col_up[i] = no_space_list[i];
        else if (i >= 4 && i <= 7)
            col_down[i - 4] = no_space_list[i];
        else if (i >= 8 && i <= 11)
            row_left[i - 8] = no_space_list[i];
        else if (i >= 12 && i <= 15)
            row_right[i - 12] = no_space_list[i];
        i++;
    }
    
    matrix_generator(col_up, col_down, row_left, row_right);
}


void    space_deleter(char *list) //Quita los espacios de la lista
{
    int i;
    int j;
    int *no_space_list = malloc(20*sizeof(int));
    
    i = 0;
    j = 0;
    while (list[i] != '\0')
    {
        if (list[i] > 48 && list[i] < 53)
        {
            no_space_list[j] = list[i];
            j++;
        }
        i++;
    }
    no_space_list[i] = '\0';
    
    column_splitter(no_space_list);
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
    
    //Resolucion de errores
    error_return = error_manager(ptr_number_list);
    
    if (error_return == 0)
    {
        printf("todo bajo control chicos :D\n");
        space_deleter(ptr_number_list);
    }
    
    return (0);
}
