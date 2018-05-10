#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = (size_t)ft_strlen(dest);
	while(i < n && src[i] != '\0')
	{
		dest[len+i] = src[i];
		++i;
	}
	dest[len + i] = '\0';
	return dest;
}

