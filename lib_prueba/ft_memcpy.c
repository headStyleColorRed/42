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
  while (i < len)
  {
    dest[i] = src[i];
    i++;
  }
  return (str1);
}
