#include "libft.h"

static void ft_lstfree(void *lst)
{
	t_list *temp;

	temp = (t_list*)lst;
	while(temp != NULL)
	{
		lst = temp;
		temp = ((t_list*)lst)->next;
		free(((t_list*)lst));
	}
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	del(*lst);
	*lst = NULL;
}
