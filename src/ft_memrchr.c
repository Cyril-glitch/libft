#include  "libft.h"


void *ft_memrchr(const void *s, int c, size_t n)
{
	const unsigned char *source = s;
	unsigned char chr = c;

	while(n > 0)
	{
    n--;

		if(source[n] == chr)
			 return (void*)(source + n);	
	}

	return NULL;
}
