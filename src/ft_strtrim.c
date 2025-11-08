#include "libft.h"

size_t ft_trimlen(char const *s1, char const *set)
{
  size_t  setlen = 0;
  size_t  s1len= 0;
  size_t  trimlen = 0;


  setlen = ft_strlen(set);
  s1len = ft_strlen(s1);

  if(*s1 == *set && s1[s1len] == set[setlen])
    trimlen = s1len - (setlen * 2);
  else if(*s1 == *set || s1[s1len] == set[setlen] )
    trimlen = s1len - setlen;
  else
    trimlen = s1len;

  return trimlen;
}

char  *ft_trimstart(char const *s1, char const *set)
{
  char  *start = NULL;

  if(*s1 == *set)
    start = (char *)s1 + ft_strlen(set);
  else
    start = (char *)s1;

  return start;
}

char *ft_strtrim(char const *s1, char const *set)
{
  char  *d = NULL;
  size_t newlen = 0;

  newlen = ft_trimlen(s1,set);
  d = malloc(sizeof(char) * (newlen + 1));
  if(!d)
    return NULL;

  return strncpy(d,ft_trimstart(s1,set),newlen);
}
