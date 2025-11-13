#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
  char  *d = NULL;
  size_t  slen = 0;
  size_t  mlen = 0;

  slen = ft_strlen(s);
  if(start >= slen)
    return NULL;

  if(len <= slen - start) 
    mlen = len ;
  else
    mlen = slen - start;

  d = malloc(sizeof(char) * (mlen + 1));

  if(!d)
    return NULL;

  memset(ft_mempcpy(d,s + start, mlen),0,1);
  return d;
}
