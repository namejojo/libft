#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while(lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}
