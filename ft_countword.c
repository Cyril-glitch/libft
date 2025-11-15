#include "libft.h" 

int  ft_countword(const  char  *s,char set)
{
  int i;
  int n;

  i = 0;
  n = 0;

  while (s[i])
  {
    if(!ft_ischarset(s[i],set) && (ft_ischarset(s[i + 1],set) || !s[i + 1]))
      n++;

    i++;
  }
  return (n);
}
