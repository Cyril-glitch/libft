#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
  char  *dst;
  dst = ft_itoa(n);
  ft_putstr_fd(dst,fd);
}

/*
int main (int ac, char **av)
{
  if (ac < 2)
    return 0;

  char c;
  c = 0;

  int fd;
  fd = ft_wopen(av[1]);
  ft_putnbr_fd(-2147483647,fd);
  close(fd);

  fd = ft_ropen(av[1]);
  ft_cat(fd,&c);
  close(fd);
}
*/
