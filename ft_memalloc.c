#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *dest;
	size_t i;

	i = 0;
	if(!(dest = malloc(size)))
		return NULL;
	while(i < size)
	{
		*(unsigned char *)(dest+i) = 0;
		++ i;
	}
	return dest;
}