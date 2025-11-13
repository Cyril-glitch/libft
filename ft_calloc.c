#include  "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  void  *d = NULL;

  d = malloc(size * nmemb);
  if(d)
  {
    memset(d, 0, size * nmemb);
    return  d;
  }
  return NULL;
}
