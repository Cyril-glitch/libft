#include  "libft.h"

/*
void  ft_putlst(t_list  *lst)
{
  t_list  *current = lst;
  while(current)
  {
    printf("%d",*(int*)current->content);
    current = current->next;
  }
}
*/

void ft_lstadd_front(t_list **lst, t_list *new)
{
  if(!lst || !new)
    return ;
  if(*lst)
  {
    new->next = *lst;
    *lst = new;
  }
  else
    *lst = new;
}

/*
int main  ()
{
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 0;
  //int e = -1;

  t_list *lst  = ft_lstnew(&a);
  lst->next = ft_lstnew(&b);
  lst->next->next = ft_lstnew(&c);

  ft_lstadd_front(&lst,ft_lstnew(&d));

  ft_putlst(lst);

  return 0;
}
*/
