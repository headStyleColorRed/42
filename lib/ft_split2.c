#include "libft.h"

void matrix_printer(char matrix[4][50])
{
    int i;
    int j;

    i = 0;
    printf("\n");
    printf("\n");
    while (i < 4)
    {
        j = 0;
        while (matrix[i][j] != '\0')
        {
            printf("  %i ", matrix[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
}

static int what_is_this(char c)
{
    if (c >= 33 || c <= 126)
        return (1);
    return (0);
}

int	ft_countw(char *str)
{
	int	numwords;

	numwords = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str && *str != ' ' && *str != '\t' && *str != '\n')
			numwords++;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
	}
	return (numwords);
}

char **ft_split(char const *s, char c)
{
    int counter;
    int i;
    int j;
    char **matrix;

    if (!s)
        return (NULL);
    matrix = (char **)malloc(sizeof(char **) * ft_strlen(s));
    if (!matrix)
        return (NULL);
    i = 0;
    j = 0;
    counter = 0;
    while (s[counter] != '\0')
    {
        counter++;

        if (what_is_this(s[counter]) != 0)
        {
            matrix[i][j] = s[counter];
            j++;
            counter++;
        }
        else
        {
            if (what_is_this(s[counter - 1]) != 0)
            {
                i++;
                j = 0;
            }
            counter++;
        }
    }
    i = 0;
    j = 0;

    return (matrix);
}

int main(void)
{
    const char frase[] = "Hola me llamo Rodrigo";
    ft_split(frase, '\n');
    return (0);
}