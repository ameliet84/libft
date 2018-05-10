#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	int i;
	int len;

	len = ft_strlen(dest);
	i = -1;
	while(src[++i])
		dest[len +i] = src[i]; 
	dest[len  + i] = '\0';
	return dest;
}
