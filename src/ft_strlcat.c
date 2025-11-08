#include "libft.h"

size_t ft_strlcat(char *dst, const char *src,size_t dsize)
{
  size_t dl = ft_strlen(dst);
  size_t sl = ft_strlen(src);
  size_t tl = dl + sl;
  char  *d = dst + dl;

  if(dsize <= dl)
    return dsize + sl;

  if (tl < dsize)
    ft_memset(ft_mempcpy(d, src, sl), 0, 1);
  else
    ft_memset(ft_mempcpy(d, src, (dsize - dl) - 1), 0, 1);
  
  return tl;
}
