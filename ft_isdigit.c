int ft_isdigit(int c)
{
  unsigned char src = (unsigned char) c;
  return (src >= '0' && src <= '9');
}
