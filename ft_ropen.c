#include "libft.h"

int ft_ropen(const char *path)
{
  int fd;
  fd = 0;

  fd = open(path,O_RDONLY);
  if(fd == -1)
    ft_putstr("file can't be open.");

  return fd;
}


