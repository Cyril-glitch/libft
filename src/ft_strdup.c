#include  "libft.h"


char *ft_strdup(const char *s)
{
	char *d = malloc(sizeof(char) * ft_strlen(s) + 1);

  d = ft_strcpy(d, s);

		return	d;
}
