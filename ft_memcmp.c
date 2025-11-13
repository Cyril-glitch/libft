#include  "libft.h"


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i = 0;
	const unsigned char 	*src1 = s1;
	const unsigned char 	*src2 = s2;

	while( i < n )	
  {
    if(src1[i] != src2[i])
      return src1[i] - src2[i];

    i++;
  }
  return 0;
}
