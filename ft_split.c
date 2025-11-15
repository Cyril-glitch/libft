#include "libft.h"

void  ft_freeiter(char **tab)
{
  size_t  i;

  i = 0;
  while (tab[i])
    free(tab[i++]);

  free(tab);
}

int  ft_parser(char **dst,char const *s, char set)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;

  while(s[i] && ft_ischarset(s[i],set))
    i++;
  while (s[i + j] && !ft_ischarset(s[i + j],set)) 
    j++;

  if(!j)
    return 0;

  *dst = malloc(sizeof(char) * (j + 1));
  if(!*dst)
    return -1;

  ft_bzero(ft_mempcpy(*dst, &s[i], j), 1);
    return (i + j);
}


char **ft_split(char const *s, char c)
{
  int n;
  int res;
  int i;
  char **tab;

  n = ft_countword(s,c);
  if((tab = malloc(sizeof(char*) * (n + 1))) == 0)
    return NULL;

  i = 0;
  res = 1;
  while(res && *s)
  {
    res = ft_parser(&tab[i++], s, c);
    s += res;
  }
  if(res == -1)
  {
    ft_freeiter(tab);
    return NULL;
  }

  tab[n] = NULL;
  return tab;
}

int main()
{
  int i = 0;
  char  **tab = NULL;
  const char *s = "bon+jo+ur";

  tab = ft_split(s,0);
  while (i < ft_countword(s,0))
  {
    printf("tab[%d] = %s \n",i,tab[i]);
    i++;
  }
  ft_freeiter(tab);
  tab = NULL;
}

