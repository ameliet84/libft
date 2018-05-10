#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int i;

	i = -1;
	if(!(str = malloc(ft_strlen(s))))
		return NULL;
	while(++i < ft_strlen(s))
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return str;
}