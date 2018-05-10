#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	if(!(str = malloc(len)))
		return NULL;
	i = -1;
	while(++i<len)
		str[i] = s[(size_t)start + i];
	return str;
}