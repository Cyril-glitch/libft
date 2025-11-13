#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  size_t newlen = 0;
  char  *d = NULL;

  if(!s1 && !s2)
    return strdup("");

  newlen = ft_strlen(s1) + ft_strlen(s2);
  d = malloc(sizeof(char) * (newlen + 1));
  if(!d)
    return NULL;

  return ft_strcat(ft_strcpy(d,s1),s2);
}
