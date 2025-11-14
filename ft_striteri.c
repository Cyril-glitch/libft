#include "libft.h"
/*
static  void  ft_iterencrypt(unsigned int i,char *c)
{
  int *src = (int *)c;
  if(i % 3 == 0)
  {
    if (ft_islower(*src))
      *src -= 64;
    else if(ft_isupper(*src))
      *src -= 32;
  }
  else if(i % 2 == 0)
  {
    if (ft_islower(*src))
      *src -= 49;
    else if(ft_isupper(*src))
      *src -= 17;
  }

}
*/

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
  unsigned int i;
  i = 0;
  while (s[i])
  {
    f(i,&s[i]);
    i++;
  }
}

/*
int main()
{
  char src[100] = "hello world";
  ft_striteri(src,ft_iterencrypt);
  printf("%s\n",src);
}
*/
