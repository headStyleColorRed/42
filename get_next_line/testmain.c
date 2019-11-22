
#include "get_next_line.h"

int main(int ac, char **av)
{
  char *line;
  int fd1;
  int fd2;


  fd1 = open(av[1], O_RDONLY);
  for (int i = 0; i < 4; i++)
  {
    get_next_line(fd1, &line);
    printf("%s\n", line);
  }


  fd2 = open(av[2], O_RDONLY);
  for (int i = 0; i < 3; i++)
  {
    get_next_line(fd2, &line);
    printf("%s\n", line);
  }
  return (0);
}
