#include  "libft.h"


char *ft_strncpy(char *dst, const char *src,size_t dsize)
{
  size_t  slen = ft_strlen(src);

  if(slen <=dsize)
  {
    dst = ft_mempcpy(dst, src, slen);
    ft_memset(dst, '\0', dsize - slen);
  }
  else
  {
    dst = ft_mempcpy(dst, src, dsize);
  }

  return  dst - dsize; 
}
