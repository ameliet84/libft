#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if (*(unsigned char *)(dest+i) == (unsigned char)c)
			return dest+i+1;
		else
			*(unsigned char *)(dest+i) = *(unsigned char*)(src+i);
		++i;
	}
	return NULL;
}
