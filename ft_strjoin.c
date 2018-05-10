#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	unsigned int len;
	unsigned int i;

	len = ft_strlen(s1) + ft_strlen(s2);
	if(!(str = malloc(len)))
		return NULL;
	i = 0;
	while( i < ft_strlen(s1))
	{
		str[i] = s1[i];
		++i;
	}
	while(i < len)
	{
		str[i] = s2[i - ft_strlen(s1)];
		++i;
	}
	str[i] = '\0';
	return str;
}
