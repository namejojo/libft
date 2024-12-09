#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int count;

	count = ft_lstsize(lst);
	del(lst);
	lst = f("primeiro");
	
	while(count > 1)
	{
		ft_lstadd_back(&lst, f("idk"));
		count--;
	}
	return(lst);
}