#include "libft.h"

int ft_wopen(const char *path)
{
  int fd;
  fd = 0;

  fd = open(path,O_WRONLY);
  if(fd == -1)
  {
    ft_putstr("file can't be open.");
    return -1;
  }

  return fd;
}


