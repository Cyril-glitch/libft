#include  "libft.h"


void *ft_memset(void *s, int c, size_t n)
{
	size_t  i = 0;
	unsigned char	*dst = s;
	
	while(i < n)
		dst[i++] = (unsigned char) c;	

	return dst; 
}
