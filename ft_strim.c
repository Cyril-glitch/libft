#include "libft.h"

char  *ft_trim(char const *s1, char const *set)
{
  size_t  i;
  size_t  mlen;
  char *new; 
  const char *start;

  i = 0;
  mlen = 0; 
  start = s1;
  new = NULL;

  while(s1[i] && ft_isset(s1[i],set))
      i++;


  start += i;
  i = 0;
  while (start[i] && !ft_isset(start[i],set))
    mlen = ++i;

  new = malloc(sizeof(char) * mlen + 1);
  if(!new)
    return NULL;

  return    ft_strncpy(new,start,mlen);
}

/*
int main ()
{
  char *res = NULL;
  res = ft_strtrim("+bon+jo+ur+","+");

  printf("%s",res);
}
*/

