#include  "libft.h"


void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i = 0;
	const unsigned char *source = s;
	unsigned char chr = c;

	while(i < n)
	{
		if(source[i] == chr)
			return (void*)(source + i);
			
	i++;
	}
	return NULL;
}
