#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	while(*s)
		s++;
	if(c == 0)
		return (char *)s;
	while(*(--s))
		if((unsigned char)*s == (unsigned char)c)
			return (char *)s;
	return NULL;
}
