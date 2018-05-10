#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = -1;
	while(++i < n-1 && *(unsigned char*)(s1) == *(unsigned char*)s2)
	{
		++s1;
		++s2;
	}
	return (int)(*(unsigned char* )s1 - *(unsigned char *)s2);
}