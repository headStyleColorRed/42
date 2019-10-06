nclude <unistd.h>
#include <stdio.h>

void    ft_strlen(char *str)
{
	    int i;
	        i = 0;
		    while(str[i] != '\0')
			           {
					           i++;
						       }
		        return i;
}
