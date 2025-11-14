#include "libft.h"

void  ft_putnbr(int nbr)
{
  long  n;
  char  c;

  n = (long)nbr;
  if (n < 0)
  {
    n *= -1;
    write(1, "-" , 1);
  }

  if (n > 9)
    ft_putnbr(n / 10);

  c = '0' + (n %= 10);
  write(1, &c, 1);
}


