#include "libft.h"

const char  *ft_trimp(char **dst,char const *s1, char const *set)
{
  size_t  i;
  size_t  mlen;
  const char *start;

  i = 0;
  mlen = 0; 
  start = s1;


  while(s1[i] && ft_isset(s1[i],set))
      i++;

  start += i; 
  if(!*start)
    return NULL; 
  i = 0;
  while (start[i] && !ft_isset(start[i],set))
    mlen = ++i;

  *dst = malloc(sizeof(char) * (mlen + 1));

  if(!*dst)
    return NULL;

  ft_bzero(ft_mempcpy(*dst,start,mlen),1);
  return start + mlen;
}

/*
int main()
{
  char *dst = NULL;
  ft_trimp(&dst,"+++hjghskjdhg","+");
}
*/
