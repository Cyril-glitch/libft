int ft_isprint(int  c)
{
  unsigned char src = (unsigned  char) c;
  return  (src >= ' ' && src <= '~');
}
