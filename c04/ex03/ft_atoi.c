
int    numerizer(char *number_array, int array_length)
{
    int i;
    int multiplier;
    int result;
    
    i = 0;
    result = 1;
    multiplier = 1;
    while (array_length >= 0 )
    {
        result += (number_array[array_length] - 48) * multiplier;
        multiplier *= 10;
        array_length--;
    }
    
    return (result - 1);
}

int checkeadora_de_caracteres(char letter)
{
    if (letter >= 97 && letter <= 122)
        return (1);
    if (letter >= 65 && letter <= 90)
        return (2);
    else if (letter >= 48 && letter <= 57)
        return (3);
    else
        return (0);
}

int homemade_isspace(char letter)
{
    if (letter == ' ' || letter == '\t' || letter == '\n' || letter == '\v' || letter == '\f' || letter == '\r')
        return (1);
    return (0);
}

int ft_atoi(char *str)
{
    int i;
    int j;
    char number_array[10];
    char *p_number_array;
    
    j = 0;
    i = 0;
    while (str[i] != '\0' && homemade_isspace(str[i]) == 1)
        i++;
    
    //    ++++++++++++++++++++++++++++++++++++++++++++++++
    //    +                                              +
    //    +   Aquí vendría lo de los mases y los menos   +
    //    +                                              +
    //    ++++++++++++++++++++++++++++++++++++++++++++++++
    
    while (str[i] != '\0' && checkeadora_de_caracteres(str[i]) == 3)
        number_array[j++] = str[i++];
    
    p_number_array = number_array;
    int a = numerizer(p_number_array, j - 1);
    
    return (a);
}
