#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t  i = 0;
    size_t  needlen = ft_strlen(needle);

    while (haystack[i])
    {
      if (ft_strncmp(haystack + i, needle, needlen ) == 0)
        return (char *)haystack + i;

      i++;
    }

    return NULL;
}
