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
	static int *cache;
	int i;
	ssize_t pager;

	if (fd < 0 || !line || read(fd, cache, 0) < 0)
		return (-1);

	i = 0;
	
	pager = read(fd, buffer, BUFFER_SIZE);
	printf("buffer: %s", buffer);

	i = 0;
}

int main(int argc, char **argv)
{
	int fd[argc];
	int result[argc];
	char *str;
	int number_of_files;
	int i;

	i = 0;
	while (i < argc - 1)
	{
		fd[i] = open(argv[i + 1], O_RDONLY);
		i++;
	}
	number_of_files = i;
	i = 0;
	while (i < number_of_files)
	{
		result[i] = get_next_line(fd[i], &str);
		printf("\nResult: %d\n", result[i]);
		i++;
	}
	return (0);
}