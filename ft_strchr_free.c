#include "libft.h"

char *ft_strchr_free(char *s, int c)
{
	char *str;

	if(!(str = malloc(sizeof(ft_strlen(ft_strchr(s, c)) + 1))))
		return NULL;
	str = ft_strcpy(str, (ft_strchr(s, c)));
	ft_strdel(&s);
	return str;
}
