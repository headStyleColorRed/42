char     *ft_putstr_non_printable(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] + 32;
        i++;
    }
    return (str);
}


