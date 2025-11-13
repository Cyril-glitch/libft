#include  "libft.h"


void *ft_memmove(void *dest, const void *src,size_t n)
{

	unsigned char	*d = dest;
	const unsigned char	*s = src;

	if(d == s)
		return dest;

	else if(d < s)
		ft_memcpy(dest,src,n);
  
	else
  { 
		while( n )
		{
			d[n-1] = s[n-1];
		n--;
		}
  }
	
		return dest;
}
