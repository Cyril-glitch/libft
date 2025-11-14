#include "libft.h"

int ft_rdw_open(const char *path)
{
  int fd;
  fd = 0;

  fd = open(path,O_RDWR);
  if(fd == -1)
    ft_putstr("file can't be open.");

  return fd;
}

