#include  "libft.h"

int ft_isset(char c,const char *set)
{
  size_t  i;
  i = 0;

  while (set[i])
  {
    if(set[i] == c)
      return (1);
    i++;
  }
  return  (0);
}
