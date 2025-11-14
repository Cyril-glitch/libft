#include  "libft.h"

int ft_cat(int  fd,char *buf)
{
  int count;
  count = 0;
  while((count = read(fd, buf, 1)) > 0)
    write(1, buf, 1);

  if(count == -1)
  {
    ft_putstr("file cant be read.");
    return 0;
  }
  return 1;
}
