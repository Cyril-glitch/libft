#include "libft.h" 

size_t  ft_countword(const  char  *s,char *set)
{
  size_t  i;
  size_t  n;

  i = 0;
  n = 0;

  while (s[i])
  {
    if(ft_isset(s[i],set) && (!ft_isset(s[i + 1],set) && s[i + 1]))
      n++;

    i++;
  }
  return (n);
}


