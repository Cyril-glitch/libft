#include "libft.h"

void	ft_setzero(void	*content)
{
	*(unsigned char *)content = 'x';
}

void	ft_putlst(t_list	*lst)
{
	t_list	*current = NULL;
	current = lst;

	while(current)
	{
		printf("%s",(char*)current->content);
		current = current->next;
	}
}


void ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!lst)
		return;

	t_list *tmp;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

/*
int main()
{
	t_list	*lst = NULL;
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("1")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("3")));

	ft_putlst(lst);
	printf("\n");
	ft_lstiter(lst,ft_setzero);
	ft_putlst(lst);
}
*/

