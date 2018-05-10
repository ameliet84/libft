#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if(!(new = malloc(sizeof(t_list))))
		return NULL;
	new = f(lst);
	while(lst->next)
	{
		lst = lst->next;
		new->next = f(lst);
		new = new->next;
	}
	return new;
}