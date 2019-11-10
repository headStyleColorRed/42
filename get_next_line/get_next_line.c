#include "get_next_line.h"

/*
    La función get_next_line recibe de main dos parámetros:
        -fd ->      File Descriptor
        -line ->    Un puntero vacío
    
    1º Declaramos entonces tres variables.
        1. Una estática para manter constancia de por dónde vamos aunque la función sea reiniciada.
        2. Un integer para guardar el valor pasado como buffer.
        3. ??
    
    2º Gestionamos errores devolviendo un -1 en caso de fallo.

    3º

*/


int get_next_line (int fd, char **line)
{
    static size_t  *content;
    int buffer_size;
    char    buf[buffer_size + 1];
    int i;

    buffer_size = 1;
    if (fd < 0 || !line || read(fd, buf, 0) < 0)
    {
        printf("Error - 1 \n porque fd: %d, line o read están mal", fd);
        return (-1);
    }

    i = 0;
    



}



int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
}

int						get_next_line(const int fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	static t_list		*file;
	int					i;
	int					ret;
	t_list				*curr;

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);

        
	curr = get_correct_file(&file, fd);
	MALLCHECK((*line = ft_strnew(1)));
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		MALLCHECK((curr->content = ft_strjoin(curr->content, buf)));
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(curr->content))
		return (0);
	i = ft_copyuntil(line, curr->content, '\n');
	(i < (int)ft_strlen(curr->content))
		? curr->content += (i + 1)
		: ft_strclr(curr->content);
	return (1);
}