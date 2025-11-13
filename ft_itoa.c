#include "libft.h"

size_t ft_countn(long n)
{
  int i;
  i = 0;

  if (n == 0)
    return 1;

  while (n)
  {
    n /= 10;
    i++;
  }
  return i;
}

char *nbrloc(long *nbr, size_t *size)
{
  if(*nbr < 0)
  {
    *nbr *= -1;
    *size += 1;
  }
  *size += ft_countn(*nbr); 
  return malloc(sizeof(char) * (*size + 1));
}

char *ft_itoa(int n)
{
  long  nbr;
  char  *nombre;
  size_t  size;
  size_t  i;
  size_t  tmp;

  nbr = n;
  i = 0;
  size = 0; 
  nombre = nbrloc(&nbr,&size);
  if(!nombre)
    return NULL;
  nombre[size] = 0; 
  while (i < size)
  {
    tmp = nbr;
    nombre[(size - 1) - i] = (tmp %= 10) + '0'; 
    nbr /= 10;
    i++;
  }
  if(n < 0)
    nombre[0] ='-';

  return nombre;
}

/*
int main()
{
  char* str = NULL;
  str = ft_itoa(2147483647);
  printf("%s\n",str);  
}
*/
