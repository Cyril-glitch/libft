#include "libft.h"

int ft_atoi(const char *nptr)
{
  int i = 0;
  int res = 0;
  int signe = 1;

  while (ft_isspace(nptr[i]))
    i++;

  if(nptr[i] == '-' || nptr[i] == '+')
  {
    if(nptr[i] == '-')
      signe *= -1;

    i++;
  }

  while (ft_isdigit(nptr[i]))
  {
    res *= 10 ;
    res += nptr[i] - '0'; 
    i++;
  }
  return res * signe;
}
