#include "libft.h" 
void  ft_freetab(char **tab)
{
  size_t  i;

  i = 0;
  while (tab[i])
    free(tab[i++]);

  free(tab);
}
char **ft_split(char const *s, char c)
{
  size_t  n;
  size_t  i;
  char **tab;

  n = ft_countword(s,&c);
  tab = malloc(sizeof(char*) * (n + 1));
  if(!tab)
    return NULL;
  else
  {
    i = 0;
    while (i < n)
    {
      s = ft_trimp(&tab[i++],s,&c);
      if(!tab[i - 1])
      {
        ft_freetab(tab);
        return NULL;
      }
    }
    tab[i] = NULL;
  }
  return tab;
}

/*
int main()
{
  int i = 0;
  char  **tab = NULL;

  tab = ft_split("+bon+jo+ur+",'+');
  while (i < 4)
  {
    printf("tab[%d] = %s \n",i,tab[i]);
    i++;
  }
  i= 0;
  while(tab[i])
  {
    free(tab[i++]);
  }
  free(tab);
}
*/
