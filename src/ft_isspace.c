int ft_isspace(int c)
{
  unsigned char src = (unsigned char) c; 
  return (src == ' ' || src == '\n' || src == '\t' || src == '\v' || src == '\f' || src == '\r'); 
}
