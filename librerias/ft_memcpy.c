#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *str1, const void *str2, size_t len)
{
  size_t i;
  unsigned char *dest;
  unsigned char *src;

  dest = (unsigned char *)str1;
  src = (unsigned char *)str2;
  i = 0;
  if (!len || dest == src)
    return (dest);
  while (i < len && dest != '\0' && src != '\0')
  {
    dest[i] = src[i++];
  }
  return (str1);
}

int main()
{

  const char src[50] = "http://www.tutorialspoint.com";
  char dest[50];
  const char src2[50] = "http://www.tutorialspoint.com";
  char dest2[50];

  strcpy(dest, "Heloooo!!");
  strcpy(dest2, "Heloooo!!");

  printf("Before memcpy dest = %s\n", dest);
  memcpy(dest, src, strlen(src) + 1);
  printf("After memcpy dest = %s\n\n", dest);


  printf("Before memcpy dest = %s\n", dest2);
  ft_memcpy(dest2, src2, strlen(src2) + 1);
  printf("After memcpy dest = %s\n", dest2);

  return (0);
}