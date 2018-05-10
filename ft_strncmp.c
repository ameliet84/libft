#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = -1;
	while(++i < n && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (i < n && (*s1 || *s2))? (int)(*s1 - *s2) : 0; 
}