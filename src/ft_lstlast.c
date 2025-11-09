#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
  t_list  *current = NULL; 
  current = lst;

  while (current->next)
  {
    current=current->next;
  }
  return current;
}

/*
int main()
{
  t_list  *lst = NULL;
  ft_lstadd_front(&lst,ft_lstnew("3"));
  ft_lstadd_front(&lst,ft_lstnew("2"));
  ft_lstadd_front(&lst,ft_lstnew("1"));
  t_list  *res = ft_lstlast(lst);

  printf("last node locate at : %p content : %s\n",res,(char*)res->content);
}
*/
