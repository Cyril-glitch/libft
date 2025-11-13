#include "libft.h"

char *ft_strncat(char *dst, const char *src,size_t ssize)
{
  char *d = dst + ft_strlen(dst);

  ft_strncpy(d,src,ssize);
  ft_memset(d + ssize,'\0', 1);
  
  return  dst;
}
