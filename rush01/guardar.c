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


/////////////////////////////////////////


char    space_reader(char list)
{
    int i;
    
    i = 0;
    while (list[i] ! = '\0')
    {
        if (list[i] > 48 && list[i] < 53)
        {
            //column_splitter (list[i]);
        }
    }
}
