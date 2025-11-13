#include  "libft.h"

int ft_lstsize(t_list *lst) 
{
  int i = 0;
  t_list  *current = NULL;
  current = lst;

  while (current)
  {
    i++;
    current = current->next;
  }
  return  i;
}

/*
int main()
{
  t_list  *lst = NULL;
  ft_lstadd_front(&lst,ft_lstnew("1"));
  ft_lstadd_front(&lst,ft_lstnew("2"));
  ft_lstadd_front(&lst,ft_lstnew("3"));

  printf("%d\n",ft_lstsize(lst));
}
*/
