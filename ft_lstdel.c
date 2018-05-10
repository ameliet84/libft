#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list **init;

	init = alst;
	while((*init)->next)
	{
		init = &(*init)->next;
		del((*init)->content, (*init)->content_size);
		free(*init);
	}
	ft_lstdelone(alst, del);
}