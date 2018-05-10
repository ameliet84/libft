#include "libft.h"
#include "string.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	len = ft_strlen(dest);
	i = -1;
	while(++ i < size && src[i])
		dest[len +i] = src[i];
	dest[len + i] = '\0';
	return ft_strlen(dest);
}