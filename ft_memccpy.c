#include  "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
  size_t  i = 0;

	unsigned char *d = dest;
	const unsigned char *s = src;

	while(i < n)	
	{
		  if(s[i] == c)
      {
			  d[i] = s[i];
			  return &d[i+1];
      }
		else
			d[i] = s[i];
	i++;
	}
  d[i] = 0;

	return NULL;
}
