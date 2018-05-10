#include "libft.h"

t_list2 *ft_lst2new(t_list2 *parent, char *str, int number)
{
	t_list2 *new;


	if(!(new = malloc(sizeof(t_list2 *))))
		return NULL;
	if(str == NULL)
		new->str = NULL;
	else
	{
		if(! (new->str = malloc(ft_strlen(str))))
		{
			free(new);
			return NULL;
		}
		new->str = ft_memcpy(new->str, str, ft_strlen(str));
	}
	new ->parent = parent;
	new -> number = number;
	new->next = NULL;
	return new;
}