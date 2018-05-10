#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	if(c == 0)
	{
		while(*s)
			s++;
		return (char *)s;
	}
	while(*s)
		if((unsigned char)*s == (unsigned char)c)
			return (char *)s;
		else 
			s++;
	return NULL;
}
