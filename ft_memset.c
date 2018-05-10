#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	void *p;

	p=s;
	i = -1;

	while (++i<n)
	{
		*(unsigned char *)s = (unsigned char)c;
		s++;
	}
	return p;
}
