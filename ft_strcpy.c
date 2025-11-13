#include  "libft.h"


char *ft_strcpy(char *dst, const char *src)
{
	char	*p = NULL;

	p = ft_mempcpy(dst, src, ft_strlen(src));
	*p = '\0';

	return dst;
}
