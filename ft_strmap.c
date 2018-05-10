#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int i;

	i = 0;
	if(!(str = malloc(ft_strlen(s))))
		return NULL;
	while(s[i])
	{
		str[i] = f(s[i]);
		++i;
	}
	return str;
}