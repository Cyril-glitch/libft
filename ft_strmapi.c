#include  "libft.h"
char  toupperf(unsigned int i, char c)
{
  if(i % 2 == 0)
    c -= 32;

  return c;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int  i;
  char  *dst;

  i = 0;
  dst = ft_strdup((char*)s);
  while(dst[i])
  {
    dst[i] = f(i,dst[i]);
    i++;
  }
  return dst;
}

/*
int main()
{
  printf("%s\n",ft_strmapi("bonjour",toupperf));
}
*/
