#include "libft.h"

char  *ft_strtrim(char const *s1, char const *set)
{
  size_t  i;
  size_t  len;
  char *new;

  i = 0; 
  len = ft_strlen(s1);
  new = NULL;
  while(s1[i] && ft_isset(s1[i],set))
      i++;
  while (s1[len - 1] && ft_isset(s1[len - 1],set))
      len--;

  if(!len)
    return NULL;
  new = malloc(sizeof(char) * ((len - i) + 1));
  if(!new)
    return NULL;

  ft_bzero(ft_mempcpy(new,&s1[i],(len - i)),1);

  return new;
}

/*
int main ()
{
  char *res = NULL;
  res = ft_strtrim("+","+");

  printf("%s",res);
}
*/
