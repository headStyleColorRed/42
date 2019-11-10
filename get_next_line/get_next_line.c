#include "get_next_line.h"

/*
    La función get_next_line recibe de main dos parámetros:
        -fd ->      File Descriptor
        -line ->    Un puntero vacío
    
    1º Declaramos entonces tres variables.
        1. Una estática para manter constancia de por dónde vamos aunque la función sea reiniciada.
        2. Un array para guardar temporalmente la string
        3. Un contador
    
    2º Gestionamos errores devolviendo un -1 en caso de fallo.

    3º

*/

int get_next_line(int fd, char **line)
{
	char *buffer[BUFFER_SIZE + 1];
	static char *cache;
	int i;
	ssize_t pager;

	if (fd < 0 || !line || read(fd, cache, 0) < 0)
		return (-1);
	
    while ((pager = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        printf("%c, ", buffer[pager]);
    }
	

	i = 0;
}
/*
int		main(int argc, char **argv)
**{
**	int		fd[argc];
**	int		ret[argc];
**	char	*str;
**	int		are_all_files_read;
**	int		i;
**
**	are_all_files_read = 0;
**	i = 0;
**	if (argc == 1)
**	{
**		while (ret[0])
**		{
**			fd[0] = open("/dev/stdin", O_RDONLY);
**			ret[0] = get_next_line(fd[0], &str);
**			printf("%d-%s\n", ret[0], str);
**			free(str);
**		}
**	}
**	while (i < argc - 1)
**	{
**		fd[i] = open(argv[i + 1], O_RDONLY);
**		i++;
**	}
**	i = 0;
**	while (!are_all_files_read)
**	{
**		while (i < argc - 1)
**		{
**			ret[i] = get_next_line(fd[i], &str);
**			printf("%d-%s\n", ret[i], str);
**			free(str);
**			i++;
**		}
**		are_all_files_read = 1;
**		while (i)
**		{
**			i--;
**			if (ret[i])
**				are_all_files_read = 0;
**		}
**	}
**	while (1)
**		;
**	return (0);
*/