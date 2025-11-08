#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t needlen = ft_strlen(needle);

    if(*needle == 0)
      return (char*)haystack;

    while (haystack[i] && i + needlen <= len)
    {
      if(ft_strncmp(haystack + i, needle, needlen) == 0)
        return (char *)haystack + i;
      
      i++;
    }

  return NULL;
}
