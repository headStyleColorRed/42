#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print_matrix (int rows, int cols, int matrix[4][4])
{
    for(int t = 0; t < rows; t++)
    {
        printf("\n");
        for(int z = 0; z < cols; z++)
            printf("  %d ", matrix[t][z]);
        
    }
}

int check_row (int rows, int cols, int matrix[4][4])
{
    int i;
    int j;
    int k;
    
    i = 0;
    j = 0;
    k = 0;
    
    while (i < rows)
    {
        while (j < cols)
        {
            k = j + 1;
            while (k < 4)
            {
                if (matrix[i][j] == matrix[i][k] && matrix[i][j] != 0)
                {
                    printf("matrix[%d][%d] == matrix[%d][%d] son iguales al ser %d y %d \n",i, j, i, k, matrix[i][j], matrix[i][k]);
                    return (1);
                }
                k++;
            }
            j++;
        }
        i++;
    }
    
    return (0);
}

int check_column (int rows, int cols, int matrix[4][4])
{
    int i;
    int j;
    int k;
    
    i = 0;
    j = 0;
    k = 0;
    
    while (i < rows)
    {
        while (j < cols)
        {
            k = j + 1;
            while (k < 4)
            {
                if (matrix[j][i] == matrix[k][i] && matrix[i][j] != 0)
                {
                    printf("matrix[%d][%d] == matrix[%d][%d] son iguales al ser %d y %d \n",i, j, i, k, matrix[j][i], matrix[k][i]);
                    return (1);
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return (0);
}




void    matrix_generator(char *col_up, char *col_down, char *row_left, char *row_right)
{
    int matrix[4][4] ={0};
    
    printf("Numeros col_up: %s\n", col_up);
    printf("Numeros col_down: %s\n", col_down);
    printf("Numeros row_left: %s\n", row_left);
    printf("Numeros row_right: %s\n", row_right);
    printf("\n");
    
    int i;
    
    i = 0;
    while (i < 4)
    {
        if ((col_up[i] == '4' && col_down[i] == '1'))
        {
            matrix[0][i] = 1;
            matrix[1][i] = 2;
            matrix[2][i] = 3;
            matrix[3][i] = 4;
        }
        i++;
    }
    i = 0;
    
    check_column(4, 4, matrix);
    check_row(4, 4, matrix);
    
    while (i < 4)
    {
        if (row_left[i] == '4' && row_right[i] == '1')
        {
                matrix[i][0] = 1;
                matrix[i][1] = 2;
                matrix[i][2] = 3;
                matrix[i][3] = 4;
        }
        i++;

    }
    
    
    check_column(4, 4, matrix);
    check_row(4, 4, matrix);
    
    print_matrix(4, 4, matrix);  
  
    printf("\n");
    
}

